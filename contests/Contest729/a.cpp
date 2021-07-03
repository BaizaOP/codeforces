// Author: BaizaOP
// Date: 7/3/2021
// Problem Name: 1542A Odd Set
// Problem Difficulty: 
// Contest: 729
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<string> answers;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x; x *= 2;
        int odd = 0, even = 0;
        for(int j = 0; j < x; j++)
        {
            int p; cin >> p;
            if(p % 2 == 0) even++;
            else odd++;
        }
        if(odd==even) answers.push_back("YES");
        else answers.push_back("NO");
    }
    for(string s : answers)
    {
        cout << s << endl;
    }
    cerr << "\nTime elapsed: " << 1000 * clock() /CLOCKS_PER_SEC << "ms\n";
    return 0;
}
