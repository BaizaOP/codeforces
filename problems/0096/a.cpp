// Author: BaizaOP
// Date: 6/30/21
// Problem Name: 96A Football
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string anime; cin >> anime;
    int len = anime.size();
    if(len < 7)
    {
        cout << "NO" << endl; 
        return 0;
    }

    int counter = 1;
    int prev = anime[0];
    bool retbool = false;
    for(int i = 1; i < len; i++)
    {
        if(anime[i] == prev)
            counter++;
        else
            counter = 1;
        
        if(counter >= 7)
        {
            retbool = true;
            break; 
        }
        prev = anime[i];
    }

    if(retbool)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
