// Author: BaizaOP
// Date: 7/6/2021
// Problem Name: 677A Vanya and Fence
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

// took maybe 4 minutes lol, i am happy now :)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, height; cin >> n >> height;
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        counter += x <= height ? 1 : 2;
    }
    cout << counter << endl;
}
