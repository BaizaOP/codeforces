// Author: BaizaOP
// Date: 7/1/2021
// Problem Name: 110A Nearly Lucky Number
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 2

// I totally just read the problem wrong :(
// it was actually super simple too lmao

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x; cin >> x;
    int counter = 0;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '4' || x[i] == '7') counter++;
    }
    if(counter == 4 || counter == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
