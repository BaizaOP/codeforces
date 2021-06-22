// Author: BaizaOP
// Date: 6/12/2021
// Problem Name: 43A Football
// Problem Difficulty: 1000
// Summer 2021 Challenge Number: 11 
// Number Today: 1
// Number of attempts: 1

// another deceptively simple one...

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num; cin >> num;
    string teamA, teamB; cin >> teamA;
    num--;
    int scoreA{1}, scoreB{0};
    for(int i = 0; i < num; i++)
    {
        string x; cin >> x;
        if(x == teamA)
        {
            scoreA++;
        }
        else
        {
            teamB = x;
            scoreB++;
        }
    }
    if(scoreA > scoreB)
        cout << teamA << endl;
    else
        cout << teamB << endl;
    
    return 0;
}
