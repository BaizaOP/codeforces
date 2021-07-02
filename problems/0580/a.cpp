// Author: BaizaOP
// Date: 7/1/2021
// Problem Name: 580A Kefa and First Steps
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int prev; cin >> prev;
    int counter = 1;
    int maxcounter = counter; 
    for(int i = 0; i < n - 1; i++)
    {
        int x; cin >> x;
        if(x >= prev) counter++;
        else counter = 1;
        if(counter > maxcounter) maxcounter = counter;
        prev = x; 
    }
    cout << maxcounter << endl;
    return 0;
}
