// Author: BaizaOP
// Date: 6/30/2021
// Problem Name: 791A Bear and Big Brother
// Problem Difficulty: 800
// Challenge: Summmer 2021 Streak Challenge
// Number of attempts: 1

// it was super duper easy. period.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int counter = 0;
    while(a <= b)
    {
        a*=3;
        b*=2;
        counter++;
    }
    cout << counter << endl;
}
