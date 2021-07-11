// Author: BaizaOP
// Date: 7/10/2021
// Problem Name: 451A Game with Sticks
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int min = (n <= m) ? n : m;
    if(min % 2 == 0) cout << "Malvika" << endl;
    else cout << "Akshat" << endl;
    return 0;
}
