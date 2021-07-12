// Author: BaizaOP
// Date: 7/11/2021
// Problem Name: 750A New Year and Hurry
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int time = 240 - k;
    int lastworking = 0;
    for(int i = 1; i <= n; i++)
    {
        int sum = (i * (i + 1)) / 2;
        sum *= 5;
        if(sum <= time) lastworking = i;
        else break;
    }
    cout << lastworking << endl;
    return 0; 
}
