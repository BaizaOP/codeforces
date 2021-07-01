// Author: BaizaOP
// Date: 6/20/2021
// Problem Name: 977A Wrong Subtraction
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

// crazy simple again

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int original, count; cin >> original >> count;
    for(int i = 0; i < count; i++)
    {
        if(original % 10 == 0)
            original /= 10;
        else
            original--;
    }
    cout << original << endl;
}

