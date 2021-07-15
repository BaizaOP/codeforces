// Author: BaizaOP
// Date: 7/14/2021
// Problem Name: 1337B Kana and Dragon Quest game
// Problem Difficulty: 900
// Challenge: 2021 Every Day Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int va (int n) { return ((n+20)/2); }
int ls (int n) { return n-10; }

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x, numva, numls; cin >> x >> numva >> numls;
        while ((numva > 0) && (x > 20)) 
        { 
            x = va(x); 
            numva--;
        }
        cout << ((x <= numls * 10) ? "YES" : "NO") << endl; 
    }
    return 0;
}

