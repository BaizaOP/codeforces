// Author: BaizaOP
// Date: 7/7/2021
// Problem Name: 144A Arrival of the General
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int minindex = -1;
    int min = 200;
    int max = -1;
    int maxindex = -1;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x <= min)
        {
            min = x;
            minindex = i;
        }
        if(x > max)
        {
            max = x;
            maxindex = i;
        }
    }
    cout << ((maxindex > minindex) ? (maxindex + (n - 1 - minindex) - 1) : (maxindex + (n - 1 - minindex))) << endl; 
    return 0;
}
