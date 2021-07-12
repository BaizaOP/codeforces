// Author: BaizaOP
// Date: 7/11/2021
// Problem Name: 510A Fox and Snake
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, wid; cin >> n >> wid;
    string full = "", last = "", first = "";
    for(int i = 0; i < wid; i++)
    {
        full.push_back('#');
        if(i == wid - 1) last.push_back('#');
        else last.push_back('.');  
        if(i == 0) first.push_back('#');
        else first.push_back('.');  
    }
    /* cout << "wid is " << wid << "\nfull is " << full;
     * cout << "\nlast is " << last << "\nfirst is " << first << endl; */
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) cout << full << endl;
        else if(i % 4 == 1) cout << last << endl;
        else if(i % 4 == 3) cout << first << endl;
    }
    return 0;
}
