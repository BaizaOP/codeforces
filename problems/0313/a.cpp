// Author: BaizaOP
// Date: 7/10/2021
// Problem Name: 313A Ilya and Bank Account
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    if(n >= 0) cout << n << endl;
    else if (n >= -10) cout << 0 << endl;
    else
    {
        n *= -1; 
        int ones = n % 10;
        int tens = (n % 100 - ones) / 10;
        if(ones >= tens)
        {
            n -= ones;
            n /= 10;
        }
        else
        {
            n -= (n % 100);
            n /= 10;
            n += ones;
        }
        n *= -1;
        cout << n << endl;
    }
    return 0;
}
