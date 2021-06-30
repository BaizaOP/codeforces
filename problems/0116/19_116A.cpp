// Author: BaizaOP
// Date: 11/09/2020
// Problem Name: 116A Tram
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 19 

#include <bits\stdc++.h>

using namespace std;
/* given a set of train stops with a number of people going in and a number of people going out in the format
out in
ex:
1 2
(1 out, 2 in)
calculate the max the train car will ever reach
*/
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int repeat;
    cin >> repeat;
    int max = 0;
    int running_total = 0;
    for(int i = 0; i < repeat; i++)
    {
        int x, y;
        cin >> x >> y;
        running_total -= x;
        running_total += y;
        if (i==0)
        {
            max = running_total;
        }
        else if (running_total > max)
        {
            max = running_total;
        }
    }
    cout << max;
}

/*
ex 1:
4
0 3
2 5
4 2
4 0
ans:
6

*/
