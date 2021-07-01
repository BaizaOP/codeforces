// Author: BaizaOP
// Date: 6/30/2021
// Problem Name: 617A Elephant
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int modu = n % 5;
    if(modu == 0)
    {
        cout << n/5 << endl;
        return 0;
    }
    else
    {
        modu = 5 - modu;
        n += modu;
        cout << n/5 << endl;
    }
    return 0;
}
