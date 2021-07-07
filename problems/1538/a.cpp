// Author: BaizaOP
// Date: 7/6/2021
// Problem Name: 1538A Stone Game
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

// i have no clue why this works

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> answers;
    for(int i = 0; i < n; i++)
    {
        int o; cin >> o;
        int max = -1;
        int maxpos = -1;
        int min = 200;
        int minpos = -1;
        for(int j = 0; j < o; j++)
        {
            int x; cin >> x;
            if(x > max)
            {
                max = x;
                maxpos = j;
            }
            if(x < min)
            {
                min = x;
                minpos = j;
            }
        }
        /* cout << "min " << minpos << " max "  << maxpos << endl; */
        int mid = o / 2;
        if((o % 2 == 1) && ((minpos == mid) || (maxpos == mid)))
            answers.push_back(mid + 1);
        else
        {
            int minfroml{minpos+1}, minfromr{o-minpos}, maxfroml{maxpos+1}, maxfromr{o-maxpos};
            int rr = minfromr > maxfromr ? minfromr : maxfromr;
            int ll = minfroml > maxfroml ? minfroml : maxfroml;
            int rl = minfromr + maxfroml;
            int lr = minfroml + maxfromr;
            if((rr <= ll) && (rr <= rl) && (rr <= lr)) answers.push_back(rr);
            else if((ll <= rl) && (ll <=lr)) answers.push_back(ll);
            else if(rl <= lr) answers.push_back(rl);
            else answers.push_back(lr);
        }
    }
    for(int i : answers) cout << i << endl;
    return 0;
}
