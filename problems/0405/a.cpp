// Author: BaizaOP
// Date: 7/1/2021
// Problem Name: 405A Gravity Flip
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

// deceptively simple...
// and it truly was!

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> anime;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        anime.push_back(x);
    }
    sort(anime.begin(), anime.end());
    for(int i = 0; i < anime.size(); i++)
    {
        cout << anime[i] << " ";
    }
    return 0;
}
