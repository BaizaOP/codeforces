// Author: BaizaOP
// Date: 7/6/2021
// Problem Name: 1374B Multiply by 2, divide by 6
// Problem Difficulty: 900
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> answers;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x == 1)
        {
            answers.push_back(0);
        }
        else if (x % 3 != 0)
        {
            answers.push_back(-1);
        }
        else 
        {
            int counter = 0;
            bool run = true;
            while(run)
            {
                if (x % 2 != 0)
                {
                    x*= 2;
                    counter++;
                }
                else
                {
                    x/=6;
                    counter++;
                }
                if(x == 1)
                {
                    answers.push_back(counter);
                    run = false; 
                }
                else if (x % 3 != 0)
                {
                    answers.push_back(-1);
                    run = false;
                }
            }
        }
    }
    for(int i : answers) cout << i << endl;
    return 0;
}
