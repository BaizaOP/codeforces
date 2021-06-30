// Author: BaizaOP
// Date: 6/11/2021
// Problem Name: 205A Little Elephant and Rozdil
// Problem Difficulty: 900
// Challenge: Summer 2021 1000 Challenge
// Number of attempts: 1  

// Summer 2021 Challenge Number: 7 
// Number Today: 2

// seems deceptively easy...
// wasn't as easy as I thought, but it was fun implementing workarounds so only 1 loop was needed! 8)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num; cin >> num;
    vector<int> anime;
    int min = 2e9;
    int index = -1;
    bool dup = false;
    for(int i = 0; i < num; i++)
    {
        int x; cin >> x;
        anime.push_back(x);
        if(x == min)
        {
            dup = true;
        }
        if(x < min)
        {
            min = x;
            index = i;
            dup = false;
        }
    }
    if(!dup)
    {
        cout << index + 1 << endl; // 1 indexed array
    }
    else
    {
        cout << "Still Rozdil" << endl;
    }
}
