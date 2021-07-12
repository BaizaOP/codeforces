// Author: BaizaOP
// Date: 7/11/2021
// Problem Name: 1475B New Year's Number
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

// i sure hope this works...
// woah it did!

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<string> anime;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        int y = 2020;
        int z = 2021;
        if(x < y) anime.push_back("NO");
        else if ((x % y == 0) || (x % z == 0)) anime.push_back("YES");
        else
        {
            bool no = true; 
            for(int i = 0; i < x / y; i++)
            {
                if((x - (y*i)) % z == 0)
                {
                    /* cout << y << " is repeated " << i << " times" << endl; */
                    /* cout << z << " is repeated " << ((x - y*i) / z) << " times" << endl; */
                    anime.push_back("YES");
                    no = false;
                    i = x;
                }
            }
            if(no) anime.push_back("NO");
        }
    }
    for(string i : anime) cout << i << endl;
}
