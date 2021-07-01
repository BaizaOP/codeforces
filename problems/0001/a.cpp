// Author: BaizaOP
// Date: 6/30/2021
// Problem Name: 1A Theatre Square
// Problem Difficulty: 1000
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 2

// it makes me feel a little warm inside (ew no what are you thinking about!?!?) to think that this is the FIRST contest problem on codeforces uwu 
// darn int overflow, i was being soooo careful until now. The whole thing was right too! all I had to do was change to long long.
// it was an interesting problem tho :)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, a; cin >> n >> m >> a;
   
    long long len = n / a;
    if(n > (len * a)) len++;
    
    long long wid = m / a;
    if(m > (wid * a)) wid++;

    cout << len * wid << endl;
    return 0;
}
