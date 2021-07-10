// Author: BaizaOP
// Date: 7/9/2021
// Problem Name: 61A Ultra-Fast Mathematician 
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1 

// til that not equals (!=) is the same thing as XOR (^) for a number in binary notation

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x, y; getline(cin, x); getline(cin, y);
    for(int i = 0; i < x.size(); i++) cout << (x[i] != y[i]);
    cout << endl;
    return 0;
}
