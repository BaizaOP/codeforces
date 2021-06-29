// Author: BaizaOP
// Date: 6/11/2021
// Problem Name: 41A Translation
// Problem Difficulty: 800
// Summer 2021 Challenge Number: 10 
// Number Today: 5
// Number of attempts: 1

// freaking occams rasor in action lmao
// it was seriously that easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a; string b; cin >> a >> b;
    reverse(a.begin(), a.end());
    if(a == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
