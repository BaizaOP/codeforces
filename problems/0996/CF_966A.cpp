// Author: BaizaOP
// Date: 10/30/2020 
// Problem Name: 996A Hit the Lottery
// Problem Difficulty: 800
// Challenge: none
// Number of attempts: 2

#include <bits\stdc++.h>

using namespace std;
/*
given an amount of money, find the least amount of bills it takes to get to 0 ez

test case 1:
125
Out:
3
*/

int solve(int x);
int main()
{
    /*vector<int> output;
    int repeat;
    cin >> repeat;
    for(int i = 0; i < repeat; i++){
        int input;
        cin >> input;
        int a = solve(input);
        output.push_back(a);
    }
    for(int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }*/
    int x;
    cin >> x;
    cout << solve(x);

}
int solve(int x)
{
    int bills{0};
    while (x > 0)
    {
        if (x % 100 == 0)
        {
            x -= 100;
            bills++;
        }
        else if (x % 20 == 0)
        {
            x -= 20;
            bills++;
        }
        else if (x % 10 == 0)
        {
            x -= 10;
            bills++;
        }
        else if (x % 5 == 0)
        {
            x -= 5;
            bills++;
        }
        else if (x % 1 == 0)
        {
            x -= 1;
            bills++;
        }
    }
    return bills;
}
