// Author: BaizaOP
// Date: 7/9/2021
// Problem Name: 486A Calculating Function
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n; cin >> n;

    if(n % 2 == 0) cout << n/2 << endl;
    else cout << (((n - (long long)1)/(long long)2) - n) << endl;
    return 0;
}
