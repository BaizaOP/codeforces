// Author: BaizaOP
// Date: 7/3/2021
// Problem Name: 460A Vasya and Socks
// Problem Difficulty: 900
// Challenge: none
// Number of attempts: 1

// short and simple :)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int counter = 0; 
    while(true)
    {
        if(counter % m == 0)
            n+=1;
        n--;
        if(n == 0) break;
        else counter++;
    }
    cout << counter << endl;
    return 0;
}
