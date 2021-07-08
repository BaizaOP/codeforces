// Author: BaizaOP
// Date: 7/7/2021
// Problem Name: 1543A Exciting Bets
// Problem Difficulty: ???
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 2

// my solution was 1000% correct, I just forgot to look at the constraints... which lead to an int overload
// LIKE FREAKING ALWAYS!!!

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        ll a, b; cin >> a >> b;
        ll target = (a >= b) ? a - b : b - a;
        if(!target) cout << "0 0" << endl;
        else if(target == 1) cout << "1 0" << endl;
        else
        {
            ll uub, ulb, lub, llb; //upperupperbound, upperlowerbound, lowerupperbound, lowerlowerbound
            ll uubdiff, ulbdiff, lubdiff, llbdiff; //upperupperbound difference, etc
            if(a > b)
            {
                uub = (a/target + 1) * target;
                uubdiff = uub - a;
                ulb = (a/target) * target;
                ulbdiff = a - ulb;
                lub = (b/target + 1) * target;
                lubdiff = lub - b;
                llb = (b/target) * target;
                llbdiff = b - llb;
            }
            else
            {
                uub = (b/target + 1) * target;
                uubdiff = uub - b;
                ulb = (b/target) * target;
                ulbdiff = b - ulb;
                lub = (a/target + 1) * target;
                lubdiff = lub - a;
                llb = (a/target) * target;
                llbdiff = a - llb;
            }
            cout << target << " ";
            if((uubdiff <= ulbdiff) && (uubdiff <= lubdiff) && (uubdiff <= llbdiff)) cout << uubdiff << endl;
            else if ((ulbdiff <= lubdiff) && (ulbdiff <= llbdiff)) cout << ulbdiff << endl;
            else if (lubdiff <= llbdiff) cout << lubdiff << endl;
            else cout << llbdiff << endl;
            
        }
    }
    return 0;
}
