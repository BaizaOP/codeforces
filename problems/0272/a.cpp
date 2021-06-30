// Author: BaizaOP
// Date: 6/10/2021
// Problem Name: 272A Dima and Friends
// Problem Difficulty: 1000
// Challenge: Summer 2021 1000 Challenge
// Number of attempts: 1 

// Summer 2021 Challenge Number: 1
// Number Today: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        sum += p;
    }

    int retnum = 0;
    n++; //include dima
    for(int i = 1; i <=5; i++) 
    {
        int x = sum;
        x+=i;
        if(x % n != 1)
        {
            retnum++;
        }
    }
    cout << retnum << endl;
    return 0;
}
