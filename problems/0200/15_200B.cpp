// Author: BaizaOP
// Date: 11/08/2020
// Problem Name: 200B Drinks
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 15

#include <bits\stdc++.h>

using namespace std;

/* given x number of drinks, find the average. */

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int repeat;
    cin >> repeat;
    double total;
    for (int i = 0; i < repeat; i++)
    {
        double x;
        cin >> x;
        total += x;
    }
    cout << total / repeat << endl;
}
