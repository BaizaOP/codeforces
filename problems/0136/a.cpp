// Author: BaizaOP
// Date: 7/7/2021
// Problem Name: 136 Presents
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

// yeah I triple read this thing just to make sure I didnt blunder... lets see
// yay! it was accepted

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> anime(n);
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        anime[x - 1] = i + 1;
    }
    for(int i = 0; i < n; i++)
    {
        if(i == n - 1) cout << anime[i] << endl;
        else cout << anime[i] << " ";
    }
    return 0;
}
