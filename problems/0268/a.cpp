// Author: BaizaOP
// Date: 7/10/2021
// Problem Name: 268A Games 
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 2

// i tried to make it more efficent, but I guess i coded it wrong
// then i realized that the constraints were small enough to do it the easy way
// im mad

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> home, away;
    for(int i = 0; i < n; i++)
    {
        int h, a; cin >> h >> a;
        home.push_back(h);
        away.push_back(a);
    }
    int counter = 0;  
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i != j) && (home[i] == away[j])) counter++; 
        }
    }
    cout << counter << endl;
    return 0;
}
