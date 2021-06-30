// Author: BaizaOP
// Date: 11/11/2020
// Problem Name: 236A Boy or Girl
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 2

// A20J Ladder Number: 23

#include <bits\stdc++.h>

using namespace std;
//find unique letters in a username, if odd, print "IGNORE HIM", if even, print "CHAT WITH HER"
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string anime;
    cin >> anime;
    for(int i = 0; i < anime.size(); i++)
    {
        for(int j = 0; j < anime.size(); j++)
        {
            if((i != j) && (anime[i] == anime[j]) && (anime[i] != '1') && (anime[j] != '1'))
            {
                anime[j] = '1';
            }
        }
    }
    int count = 0;
    for(char c : anime)
    {
        if(c == '1')
        {
            count++;
        }
    }
    if ((anime.size() - count) % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}
