// Author: BaizaOP
// Date: 6/30/2021
// Problem Name: 160A Twins
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int sum = 0;
    vector<int> anime;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        sum += x;
        anime.push_back(x);
    }
    
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    sort(anime.begin(), anime.end());
    reverse(anime.begin(), anime.end());
    
    int minisum = 0;
    int counter;
    for(int i = 0; i < n; i++)
    {
        minisum += anime[i];
        if(minisum > sum - minisum)
        {
            counter = i + 1;
            break;
            i = 200;
        }
    }

    cout << counter << endl;
    return 0;
}
