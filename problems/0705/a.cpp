// Author: BaizaOP
// Date: 7/9/2021
// Problem Name: 705A Hulk
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    if(n == 1)
    {
        cout << "I hate it" << endl;
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) cout << "I hate ";
        else cout << "I love ";
        if(i != n - 1) cout << "that ";
    }
    cout << "it" << endl;
    return 0;
}
