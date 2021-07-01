// Author: BaizaOP
// Date: 7/1/2021
// Problem Name: 59A Word
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string anime; cin >> anime;
    if(anime.size() == 1)
    {
        cout << anime << endl;
        return 0;
    }
    int len = anime.size();
    int halflen = (len % 2 == 0) ? len / 2 : (len - 1) / 2;

    int lower = 0;
    int upper = 0;
    bool changetoupper = false;
    for(int i = 0; i < len; i++)
    {
        int ascii = (int)anime[i];
        if(ascii >= (int)'A' && ascii <= (int)'Z') upper++;
        if(ascii >= (int)'a' && ascii <= (int)'z') lower++;
        if(lower > halflen) break;
        if(upper > halflen)
        {
            changetoupper=true;
            break;
        }
    }

    if(changetoupper)
    {
        for(int i = 0; i < len; i++)
        {
            int ascii = (int)anime[i];
            if(ascii >= (int)'a' && ascii <= (int)'z')
            {
                ascii -= ((int)'a' - (int)'A');
                anime[i] = (char)ascii;
            }
        }
    }
    else
    {
        for(int i = 0; i < len; i++)
        {
            int ascii = (int)anime[i];
            if(ascii >= (int)'A' && ascii <= (int)'Z')
            {
                ascii+=((int)'a' - (int)'A');
                anime[i] = (char)ascii;
            }
        }
    }
    cout << anime << endl;
    return 0;    
}
