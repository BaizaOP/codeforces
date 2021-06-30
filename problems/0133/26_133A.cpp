// Author: BaizaOP
// Date: 11/11/2020
// Problem Name: 133A HQ9+
// Problem Difficulty: 900
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 2

// A20J Ladder Number: 26

// another smooth brained me moment XD

#include <bits\stdc++.h>

using namespace std;

//if any of the characters 'H' 'Q' or '9' are in the string, print YES, else NO

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string anime;
    cin >> anime;
    bool yes = false;
    for (int i = 0; i < anime.size(); i++)
    {
        if(anime[i] == 'H')
        {
            yes = true;
        }
        else if (anime[i] == 'Q')
        {
            yes = true;
        }
        else if (anime[i] == '9')
        {
            yes = true;
        }
    }
    if(yes)   
        cout << "YES";
    else
        cout << "NO";
}
// g++ -std=c++11 -O2 -Wall 26_133A.cpp -o test
