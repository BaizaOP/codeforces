// Author: BaizaOP
// Date: 11/05/2020
// Problem Name: 32B Borze
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 4

#include <bits\stdc++.h>

using namespace std;
/*
This is a program that parces a string made up of '-'s and '.'s. the end result is an int.
the pattern goes as follows: '.' is a 0, '-.' is a 1, and '--' is a 2. There will always be enough for a digit.
pretty simple.
*/



int main()
{
    vector<int> anime;
    string str;
    cin >> str;
    bool skip = false;
    for(int i = 0; i < str.size(); i++)
    {   
        if(!skip){
            if (str[i]=='.')
            {
               anime.push_back(0);
            }
            else if((str[i] == '-') && (str[i+1] == '.'))
            {
                anime.push_back(1);
                skip = true;
            }
            else if((str[i] == '-') && (str[i+1] == '-'))
            {
                anime.push_back(2);
                skip = true;
            }
        }
        else
        {
            skip = false;
        }
    }
    for (int i : anime)
    {
        cout << i;
    }
    cout << endl;
}
/*
testcase 1:
.-.--
ans:
012
*/
