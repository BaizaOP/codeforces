// Author: BaizaOP
// Date: 11/08/2020
// Problem Name: 148A Insomnia Cure
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 16

#include <bits\stdc++.h>

using namespace std;
/* given five numbers, count how many numbers in the fifth number divides evenly in at least one of the four numbers. cout that num*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k, l, m, n, anime;
    cin >> k >> l >> m >> n >> anime;
    int out = 0;
    for (int i = 1; i <= anime; i++)
    {
        if (i % k ==0)
        {
            out++;
        }
        else if (i % l == 0)
        {
            out++;
        }
        else if (i % m == 0)
        {
            out++;
        }
        else if (i % n == 0)
        {
            out++;
        }
    }
    cout << out;    
}
/* 
test num:
2
3
4
5
24
ans: 
17
*/
