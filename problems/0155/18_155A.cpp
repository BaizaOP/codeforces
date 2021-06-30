// Author: BaizaOP
// Date: 11/09/2020 
// Problem Name: 155A I_love_%username%
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 18

#include <bits\stdc++.h>

using namespace std;
// given an amount of scores, a score is AWESOME if it is less than the least or greater than the most, output how many scores are AWESOME.
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int repeat;
    cin >> repeat;
    int ans = 0;//AWESOMEness score
    int most, least;
    for (int i = 0; i < repeat; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            most = x;
            least = x;
        }
        else if (x < least) //worst than least
        {
            least = x;
            ans++; //increment AWESOMEness counter
        }
        else if (x > most) // better than highest
        {
            most = x;
            ans++; // increment AWESOMEness counter
        }
    } 
    cout << ans; //output AWESOMEness score
}
