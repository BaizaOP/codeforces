// Author: BaizaOP
// Date: 7/9/2021
// Problem Name: 337A Puzzles
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    vector<int> anime;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        anime.push_back(x);
    }
    sort(anime.begin(), anime.end());
    int mindiff = 4000;
    for(int i = 0; i <= n-m; i++)
    {
        int curdiff = anime[i + m - 1] - anime[i];
        if(curdiff < mindiff) mindiff = curdiff;
    } 
    cout << mindiff << endl;
}
