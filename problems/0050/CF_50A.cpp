// Author: BaizaOP
// Date: 10/30/2020 
// Problem Name: 50A Domino Piling
// Problem Difficulty: 800
// Challenge: none
// Number of attempts: 1

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int prod = x * y;
    if (prod % 2 == 0)
    {
        cout << prod / 2;
    }
    else if (prod % 2 == 1)
    {
        cout << (prod - 1) / 2; 
    }
}
//ez
