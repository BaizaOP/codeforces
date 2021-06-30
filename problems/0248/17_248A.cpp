// Author: BaizaOP
// Date: 11/09/2020
// Problem Name: 248A Cupboards
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 17

#include <bits\stdc++.h>

using namespace std;

/* given a number of rows, with two numbers in each row, count how many conversions needed to get every number in a column to one number:
1 0
1 1
0 1
1 1
0 0
to
1 1
1 1
1 1 
1 1
1 1
in this case. Because it took 4 flips, you would output 4 
*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int repeat;
    cin >> repeat;
    int right = 0; 
    int left = 0;
    for (int i = 0; i < repeat; i++)
    {
        int x, y;
        cin >> x >> y;
        right += x;
        left += y;
    }
    int ans = 0;
    if (repeat-right >= right)
    {
        ans += right;
    }
    else
    {
        ans += (repeat-right);
    }
    if (repeat-left >= left)
    {
        ans += left;
    }
    else
    {
        ans += (repeat-left);
    }
    cout << ans;
}
/*
test case 1:
5
1 0
1 1
0 1
1 1
0 0
ans
4
the gimmic: basically sum each column. if the total is closer to the amount of rows, count how many flips to get it all ones, 
if the total number is closer to zero, count how many flips to make everything 1. Do the same with the other row and sum the flips
output the sum.
*/
