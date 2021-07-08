// Author: BaizaOP
// Date: 7/7/2021
// Problem Name: 58A Chat Room
// Problem Difficulty: 1000
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 2

// i totally over thunk the question cuz i read it wrong lol

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    if(s.size() < 5)
    {
        cout << "NO" << endl; 
        return 0;
    }
    bool h = false, e = false, l = false, secondl = false;
    for(int i = 0; i < s.size(); i++)
    {
        if(h)
        {
            if(e)
            {
                if(l)
                {
                    if(secondl)
                    {
                        if(s[i] == 'o')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                    else if(s[i] == 'l') secondl = true;
                }
                else if(s[i] == 'l') l = true;
            }
            else if(s[i] == 'e') e = true;
        }
        else if(s[i] == 'h') h = true;
    }
    cout << "NO" << endl;
    return 0;
}
