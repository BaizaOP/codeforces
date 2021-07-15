// Author: BaizaOP
// Date: 7/14/2021
// Problem Name: 1399A Remove Smallest
// Problem Difficulty: 800
// Challenge: 2021 Every Day Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        vector<int> anime;
        int m; cin >> m;
        for(int j = 0; j < m; j++) 
        { 
            int x; cin >> x; 
            anime.push_back(x);
        }
        sort(anime.begin(), anime.end());
        bool yes = true;
        for(int j = 1; j < m; j++)
        {
            int diff = anime[j] - anime[j - 1];
            if(diff < 0) diff *= -1;
                if(diff > 1)
            {
                yes = false;
                j = m + 10;
            }
        }
        cout << (yes ? "YES" : "NO") << endl;
    }
}
