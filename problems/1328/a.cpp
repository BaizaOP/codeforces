// Author: BaizaOP
// Date: 7/7/2021
// Problem Name: 1328A Divisibility Problem
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

//very easy...

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        ll a, b; cin >> a >> b;
        ll modu = a % b;
        cout << ((modu == 0) ? 0 : b - modu) << endl;
    }
    return 0;
} 
