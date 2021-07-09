// Author: BaizaOP
// Date: 7/8/2021
// Problem Name: 344A Magnets
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 2

// my excuse is that I am tired... okay?

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string prev; cin >> prev;
    int counter = 1;
    for(int i = 1; i < n; i++)
    {
        string x; cin >> x;
        if(x != prev) counter++;
        prev = x;
    }
    cout << counter << endl;
    return 0;
}
