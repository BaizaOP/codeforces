// Author: BaizaOP
// Date: 10/30/2020 
// Problem Name: 1433 Boring Apartments
// Problem Difficulty: 800
// Challenge: none
// Number of attempts: 1

#include <bits\stdc++.h>

using namespace std;

int solve(int x); 



int main()
{
    int repeat, output;
    vector<int> out;
    cin >> repeat;
    for(int i = 0; i < repeat; i++)
    {
        int x;
        cin >> x;
        output = solve(x);
        out.push_back(output);
    }
    for (int i = 0; i < out.size(); i++)
    {
        if (i != out.size() - 1)
        {
            cout << out[i] << endl;
        }
        else
        {
            cout << out[i];   
        }
    }
}
int solve(int x)
{
    int number{x % 10};
    int size = 0;
    while (x > 0)
    {
        size++;
        x /= 10;
    }
    
    int ans = 0;
    ans += ((number - 1) * 10);
    
    while (size > 0)
    {
        ans += size;
        size--;
    }
    
    return ans; 
}
