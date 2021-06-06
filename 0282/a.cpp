// Author: Baiza
// Date: 6/5/2021
// Problem Number: 282A
// Problem Name: Bit++
// Number of attempts: 1 

#include <bits/stdc++.h>

using namespace std;

int solve (string);

int main()
{
    int n;
    cin >> n;
    int final = 0; 
    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        final+=solve(x);
    
    }
    cout << final << endl;
    return 0;
}


int solve(string x)
{
    int sign = 0;
    for(int i = 0; i < x.size(); i++)
    {

        if(x[i] == '+')
        {
            sign = 1;
            break;
        }
        else if(x[i] == '-')
        {
            sign = -1;
        }
    }
    return sign;
}
