// Author: BaizaOP
// Date: 6/10/2021
// Problem Name: 318A Even Odds
// Problem Difficulty: 900
// Challenge: Summer 2021 1000 Challenge
// Number of attempts: 2

// Summer 2021 Challenge Number: 5
// Number Today: 5

#include <bits/stdc++.h>

using namespace std;

// freaking TLE
// solution was SOOO easy lmao
// if less than or equal to mid, times 2 minus 1
// if greater than mid, minus mid times 2

int main()
{
    long long num; long long index; cin >> num >> index;
    long long mid;
    if(num % 2 == 1)
        mid = (num + 1) / 2;
    else 
        mid = num / 2;
    /*
    if(index <= mid)
    {
        long long counter = 0;
        for(long long i = 1; i <= num; i++)
        {
            if(i % 2 == 1)
            {
                counter++;
                if(counter == index)
                {
                   cout << i << endl;
                   return 0;
                }
            }
        }
    }
    else
    {
        long long counter = mid;  
        for(long long i = 1; i <= num; i++)
        {
            if(i % 2 == 0)
            {
                counter++;
                if(counter == index)
                {
                   cout << i << endl;
                   return 0;
                }
            }
        }
    }
    */
    
    if(index <= mid)
    {
        cout << (index * 2) - 1 << endl;
    }
    else
    {
        cout << (index - mid) * 2 << endl;
    }
    return 0;
}
