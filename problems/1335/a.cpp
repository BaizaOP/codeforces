// Author: BaizaOP
// Date: 7/10/2021
// Problem Name: 1335A Candies and Two Sisters
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

// i did this in 90 seconds, could have probably done it in less lol

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> anime;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x < 3) x = 0;
        else if(x % 2 == 0) x-=2;
        else x-=1;
        anime.push_back(x/2);
    }
    for(int i : anime) cout << i << endl;
    return 0;
}
