// Author: BaizaOP
// Date: 7/6/2021
// Problem Name: 467A George and Accommodation
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        int p, q; cin >> p >> q;
        counter += ((p+2) <= q);
    }
    cout << counter << endl;
    
    return 0;
}
