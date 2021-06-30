// Author: BaizaOP
// Date: 6/11/2021
// Problem Name: 339B Xenia and Ringroad
// Problem Difficulty: 1000
// Challenge: Summer 2021 1000 Challenge
// Number of attempts: 2

// Summer 2021 Challenge Number: 8
// Number Today: 3

// really short...?
// it really was that easy... except "moves" got an integer overflow URGHGHGHGHGHGHGH. Literally had to change to long long then it worked :sadge:


#include <bits/stdc++.h>

using namespace std;

int moveto(int from, int to, int max);

int main()
{
    int max; int num; cin >> max >> num;
    long long moves = 0;
    int prev = 1;
    for(int i = 0; i < num; i++)
    {
        int x; cin >> x;
        moves += moveto(prev, x, max);
        prev = x;
    }
    cout << moves << endl;
}

int moveto(int from, int to, int max)
{
    if(to >= from)
        return (to - from); 
    else
        return (max - from) + to;
}
