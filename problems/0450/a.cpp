// Author: BaizaOP
// Date: 6/10/2021
// Problem Name: 450A Jzzhu and Children
// Problem Difficulty: 1000
// Challenge: Summer 2021 1000 Challenge
// Number of attempts: 1 

// Summer 2021 Challenge Number: 2 
// Number Today: 2

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num; int candy; cin >> num >> candy;
    vector<vector<int>> anime;
    for(int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        anime.push_back({i+1, x, 0});
    }
    /*    
    for(auto i : anime)
    {
        cout << i[0] << i[1] << i[2] << endl;

    }
    */ 

    while(true)
    {
        if(anime.size() == 1)
        {
            cout << anime[0][0] << endl;
            break;
        }
        else
        {
            anime[0][2] += candy;
            vector<int> temp = anime[0];
            anime.erase(anime.begin());
            if(temp[2] < temp[1])
                anime.push_back(temp);
        }
    }
    return 0;
}
