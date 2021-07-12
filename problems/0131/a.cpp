// Author: BaizaOP
// Date: 7/11/2021
// Problem Name: 131A cAPS lOCK
// Problem Difficulty: 1000
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

bool isup (char c) { return ((c >= 'A') && (c <= 'Z')); }
bool islo (char c) { return ((c >= 'a') && (c <= 'z')); }
char toup (char c) { return ((char)(c - 'a' + 'A')); }
char tolo (char c) { return ((char)(c - 'A' + 'a')); }

int main()
{
    string x; cin >> x;
    if(x.size() == 1)
    {
       if(isup(x[0])) cout << tolo(x[0]) << endl;
       else cout << toup(x[0]) << endl;
       return 0;
    }
    else
    {
        string p = "";
        char c = x[0];
        c = isup(c) ? tolo(c) : toup(c); 
        p.push_back(c);
        for(int i = 1; i < x.size(); i++)
        {
            char d = x[i]; 
            if(isup(d)) p.push_back(tolo(d));
            else
            {
                cout << x << endl;
                return 0;
            }
        }
        cout << p << endl;
    }
    return 0;
}


