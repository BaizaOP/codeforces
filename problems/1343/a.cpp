// Author: BaizaOP
// Date: 7/3/2021
// Problem Name: Candies
// Problem Difficulty: 900
// Challenge: none
// Number of attempts: 1

// thought it was gonna be hard, but actually wasn't
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> twos, output;
    int cur = 2;
    for(int i = 1; i <= 28; i++)
    {
        cur *= 2;
        cur--;
        twos.push_back(cur);
        cur++;
    }
    int p; cin >> p;
    for(int i = 0; i < p; i++) 
    {
        int n; cin >> n;
        int gcd = 0;
        for(int j = 0; j < twos.size(); j++)
        {
            if(n % twos[j] == 0)
            {
                output.push_back(n / twos[j]);
                j = 50;
            }
        }
    }
    for(int i : output) cout << i << endl;
    return 0;
}
