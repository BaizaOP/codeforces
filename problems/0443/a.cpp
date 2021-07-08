// Author: BaizaOP
// Date: 7/7/2021
// Problem Name: 443A Anton and Letters
// Problem Difficulty: 800
// Challenge: Summer 2021 Challenge
// Number of attempts: 2

// im actually getting pissed. I keep not reading the whole question and getting the wrong answer
// i need to start paying more attention

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    getline(cin, x);
    int size = x.size();
    if(size < 3)
    {
        cout << 0 << endl; 
        return 0;
    }
    vector<char> v;
    for(int i = 0; i < size; i++)
    {
        char c = x[i];
        if((c != ' ') && (c != ',') && (c != '{') && (c != '}'))
        {
            if(find(v.begin(), v.end(), c) == v.end()) v.push_back(c);
        }
    }
    cout << v.size() << endl; 
    return 0;
}
