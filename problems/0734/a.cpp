// Author: BaizaOP
// Date: 7/1/2021
// Problem Name: 734A Anton and Danik
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int halfn = (n % 2 == 0) ? n/2 : (n-1)/2;
    string anime; cin >> anime;
    int acounter = 0;
    int dcounter = 0;
    for(int i = 0; i < anime.size(); i++)
    {
        if(anime[i] == 'A') acounter++;
        else dcounter++;
        if(acounter > halfn)
        {
            cout  << "Anton" << endl;
            return 0;
        }
        if(dcounter > halfn)
        {
            cout  << "Danik" << endl;
            return 0;
        }
    }
    cout << "Friendship" << endl;
    return 0;
            
}
