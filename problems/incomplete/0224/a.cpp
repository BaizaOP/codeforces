// Author: BaizaOP
// Date: 6/12/2021
// Problem Name: 224A Parallelepiped
// Problem Difficulty: 1100
// Summer 2021 Challenge Number: 11 
// Number Today: 1
// Number of attempts: 

#include <bits/stdc++.h>

using namespace std;

int findmax (int a, int b, int c);
int gcf (vector<int> a, vector<int> b);

int main()
{
    int a, b, c; cin >> a >> b >> c;

    vector<vector<int>> factors = {{1},{1},{1}};

    int max = findmax(a,b,c);
    for(int i = 2; i <= max/2; i++)
    {
        if(a % i == 0)        
            factors[0].push_back(i);
        if(b % i == 0)
            factors[1].push_back(i);
        if(c % i == 0)
            factors[2].push_back(i);
    }
    /*
    for(int i = 0; i < factors.size(); i++)
    {
        if(i == 0)
            cout << "a: ";
        else if (i == 1)
            cout << "b: ";
        else
            cout << "c: ";
        for(int j = 0; j < factors[i].size(); j++)
            cout << factors[i][j] << " ";
        cout << endl;
    }*/
    int ab = gcf(factors[0], factors[1]);
    int bc = gcf(factors[1], factors[2]);
    int ac = gcf(factors[0], factors[2]);
    cout << 4 * (ab + bc + ac) << endl;
    return 0;
}

int findmax (int a, int b, int c)
{
    if((a > b) && (a > c))
        return a;
    else if (b > c)
        return b;
    else 
        return c;
}

int gcf (vector<int> a, vector<int> b)
{
    int max = -1;
    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < b.size(); j++)
        {
            if(a[i] == b[j])
            {
                if(a[i] > max)
                    max = a[i];
            }
        }
    }
    return max;
}
