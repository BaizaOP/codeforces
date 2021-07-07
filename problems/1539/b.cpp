// Author: BaizaOP
// Date: 7/6/2021
// Problem Name: 1539B Love Song
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 4

// i kept getting TLEs so I had to cheat :(
// I wont count this towards today's amount

#include <bits/stdc++.h>

using namespace std;

int compute_char (char);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int strsize, queries; cin >> strsize >> queries;
    vector<long long> sums (strsize + 1);
    for(int i = 0; i < strsize; i++)
    {
        char c; cin >> c;
        sums[i+1] = (long long) sums[i] + c - (int)'a' + 1;
    }
    for(int i = 0; i < queries; i++)
    {
        int beg, fin; cin >> beg >> fin;
        //queries given as 1-based but string is 0 based, so decrement both beg and fin 
        cout << sums[fin] - sums[beg-1] << endl;
    }
    return 0;
}
