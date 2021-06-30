// Author: BaizaOP
// Date: 11/02/2020
// Problem Name: 263A Beautiful Matrix
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 2 

#include <bits\stdc++.h>

using namespace std;

/* find number of moves it takes to move the one in a 5 x 5 array to the middle position 
(position 2, 2 in the array) look at test case below for more info 
*/
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ROWS = 5;
    int COLS = 5;
    vector<int> index;
    for (int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                index.push_back(i);
                index.push_back(j);
            }
        }
    } 
    //cout << "ROWS: " << index[0] << " COLS: " << index[1] << "  size" << index.size();
    int x = index[0] - 2;
    if (x < 0)
    { 
        x *= -1;
    }
    int y = index[1] - 2;
    if (y < 0) 
    {
        y *= -1;
    }
    int ans = x + y;
    cout << ans << endl;
}
/* 
test case 1:
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
ans:
3
*/
