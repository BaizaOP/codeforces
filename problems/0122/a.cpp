// Author: BaizaOP
// Date: 7/10/2021
// Problem Name: Lucky Division
// Problem Difficulty: 1000
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 2

// I hate myself lul. I KEEP RUSHING AND NOT READING!!!!! URGH!

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> acceptable = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for(int i = 0; i < acceptable.size(); i++) 
    {
        if(n % acceptable[i] == 0) 
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0; 
}
