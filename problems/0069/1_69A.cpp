// Author: BaizaOP
// Date: 11/02/2020
// Problem Name: 69A Young Physicist
// Problem Difficulty: 1000
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1 

// A20J Ladder Number: 1 

#include <bits\stdc++.h>

using namespace std;

// given repeat number of tuples (groups of three) are the sum of them (0,0,0)?

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int repeat;
    cin >> repeat;
    vector<int> anime{0,0,0};
    for(int i = 0; i < repeat; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            anime[j] += x;
        }
    }
    
    // debug cout << anime[0] << "   " << anime[1] << "   " << anime[2] << endl;
    
    if ((anime[0] == 0) && (anime[1] == 0) && (anime[2] == 0))
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
}
/*
test case 1:
3
3 -1 7
-5 2 -4
2 -1 -3
ans: 
yes
*/
