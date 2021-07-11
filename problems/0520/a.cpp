// Author: BaizaOP
// Date: 7/20/2021
// Problem Name: 520A Pangram
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    if(n < 26)
    {
        string x; cin >> x; 
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        vector<int> anime, nother;
        for(int i = 0; i < n; i++)
        {
            char c; cin >> c;
            int k;
            if(c >= 'a') k = (int)c - (int)'a';
            else k = (int)c - (int)'A';
            k += 1;
            anime.push_back(k); 
        }
        sort(anime.begin(), anime.end());
        int prev = anime[0];
        nother.push_back(prev);
        for(int i = 1; i < n; i++)
        {
            if(anime[i] != prev) nother.push_back(anime[i]);
            prev = anime[i];
        }
        cout << ((nother.size() == 26) ? "YES" : "NO") << endl;
    }
    return 0;
}
