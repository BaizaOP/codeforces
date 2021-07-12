// Author: BaizaOP
// Date: 7/11/2021 
// Problem Name: 1475A Odd Divisor 
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<string> anime;
    for(int i = 0; i < n; i++)
    {
        long long num; cin >> num;
        if(num == 1) anime.push_back("NO");
        else
        {
            long long p = (long long) log2( ((long double) num) );
            p = pow(2, p);
            anime.push_back( ((num == p) ? "NO" : "YES") );
        }
    }
    for(string i : anime) cout << i << endl;
    return 0;
}
