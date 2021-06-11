// Author: BaizaOP
// Date: 6/10/2021
// Problem Name: 165A Supercentral Point
// Problem Difficulty: 1000
// Summer 2021 Challenge Number: 3 
// Number Today: 3
// Number of attempts: 1  

// time for big jank loll
// and it did not disappoint. I am not sure whether I should be happy or sad about this...

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num; cin >> num;
    
    vector<pair<int,int>> anime;
    for(int i = 0; i < num; i++)
    {
        int a; int b; cin >> a >> b;
        anime.push_back({a,b});

    }
    // has to be atleast 5 points for there to be a super center 
    if(num <= 4)
    {
        cout << 0 << endl;
        return 0;
    }

    /*
    for(auto i : anime)
    {
        cout << "first " << i.first << " second " << i.second << endl;
    }
    */

    int retnum = 0;
    int s = anime.size();
    for(int i = 0; i < s; i++)
    {
        bool possible = true;

        //right
        bool tryit = false;
        for(int j = 0; j < s; j++)
        {
            if((anime[j].first > anime[i].first) && (anime[j].second == anime[i].second))
            {
                tryit = true;
                //cout << "right " << j << endl;
            }
        }
        possible = possible && tryit;
        if(!possible)
        {
            continue;
        }
        // left
        tryit = false;
        for(int j = 0; j < s; j++)
        {
            if((anime[j].first < anime[i].first) && (anime[j].second == anime[i].second))
            {
                tryit = true;
                //cout << "left " << j << endl;
            }
        }
        possible = possible && tryit;
        if(!possible)
        {
            continue;
        }
        
        //down
        tryit = false;
        for(int j = 0; j < s; j++)
        {
            if((anime[j].first == anime[i].first) && (anime[j].second < anime[i].second))
            {
                tryit = true;
                //cout << "down " << j << endl;
            }
        }
        possible = possible && tryit;
        if(!possible)
        {
            continue;
        }

        //up
        tryit = false;
        for(int j = 0; j < s; j++)
        {
            if((anime[j].first == anime[i].first) && (anime[j].second > anime[i].second))
            {
                tryit = true;
                //cout << "up " << j << endl;
            }
        }
        possible = possible && tryit;
        
        if(possible)
            retnum++;

    }
    cout << retnum << endl;
    return 0;
}
