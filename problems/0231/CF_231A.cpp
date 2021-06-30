// Author: BaizaOP
// Date: 10/30/2020
// Problem Name: 231A Team
// Problem Difficulty: 800
// Challenge: none
// Number of attempts: 1 

#include <bits\stdc++.h>

using namespace std;

/*
take in a repeat number to see how many times this should be repeated
take in three numbers, see if sum is greater than one, if so increment output, if not do nothing
output the output int
*/ 

int main()
{
    int output = 0;
    int repeat;
    cin >> repeat;
    for (int i = 0; i < repeat; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) > 1)
           output++; 
    }
    cout << output;
}
