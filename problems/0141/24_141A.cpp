// Author: BaizaOP
// Date: 11/11/2020
// Problem Name: 141A Amusing Joke
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 24 

#include <bits\stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string x, y, anagram;
    cin >> x >> y >> anagram;
    x += y;
    int count = 0;
    bool done = true;
    
    if(anagram.size() == x.size()){
        for(int i = 0; i < x.size(); i++)
        {
            bool found = false;
            for(int j = 0; j < anagram.size(); j++)
            {
                if((!found) && (x[i]==anagram[j]) && (x[i] != '1') && (anagram[j] != '1'))
                {
                    x[i] = '1';
                    anagram[j] = '1';
                    //cout << "anagram: " << anagram << " x and y: " << x << endl;
                    count++;
                    found = true;
                }
            }
        }
        //cout << "\n\nanagram: " << anagram << " x and y: " << x << endl;
    }
    else
    {
        done = false;
    }
    if ((done == true) && (count == anagram.size()))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
// g++ -std=c++11 -O2 -Wall 24_141A.cpp -o test
/* 
test case 1:
SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS
ans
YES

test case 2:
PAPAINOEL
JOULUPUKKI
JOULNAPAOILELUPUKKI
ans: 
NO
*/
