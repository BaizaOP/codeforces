// Author: BaizaOP
// Date: 7/1/2021
// Problem Name: 118A String Task
// Problem Difficulty: 1000
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

bool isvowel(char x);
char lowercase(char x);

int main()
{
    string x; cin >> x;
    for(int i = 0; i < x.size(); i++)
    {
        char p = lowercase(x[i]); 
        if(!isvowel(p)) cout << "." << p;
    }
    return 0;
}

bool isvowel(char x)
{
    if(x == 'a' || x == 'o' || x == 'y' || x == 'e' || x == 'u' || x == 'i') return true;
    
    return false;
}
char lowercase(char x)
{
    if((int)x <= (int)'Z')
    {
        x += (int)'a';
        x -= (int)'A';
    }
    return x;
}
