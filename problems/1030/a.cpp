// Author: BaizaOP
// Date: 7/9/2021
// Problem Name: 1030 In Search of an Easy Problem
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

// deceptively easy...
// and it really was!

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}
