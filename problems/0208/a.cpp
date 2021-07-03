// Author: BaizaOP
// Date: 7/2/2021
// Problem Name: 208A Dubstep
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x; cin >> x;
    x.push_back(' ');
    x.push_back(' ');
    x.push_back(' ');
    string retstr = "";
    bool canspace = false, alreadyspaced = false;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == ' ') break; 
        if(x[i] == 'W' && x[i+1] == 'U' && x[i+2] == 'B')
        {
            if(canspace)
            {
                if(!alreadyspaced)
                {
                    retstr.push_back(' ');
                    alreadyspaced = true;
                }
            }
            i+=2;
        }
        else
        {
            canspace = true; 
            alreadyspaced = false; 
            retstr.push_back(x[i]);
        }
    }
    if(retstr[retstr.size() - 1] == ' ') retstr.pop_back();
    cout << retstr << endl;
    return 0;
}
