// Author: BaizaOP
// Date: 7/9/2021
// Problem Name: 469A I Wanna Be the Guy
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 3

// i am going wayy to fast...
// the first error was that i deleted a crucial line in my program when deleting some "printf" debug statements
// and the second error was that I got the input was wrong the whole time...!?!??!

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x; cin >> n >> x;
    vector<int> anime;
    for(int i = 0; i < x; i++)
    {
        int c; cin >> c; 
        anime.push_back(c);
    }
    int y; cin >> y;
    for(int i = 0; i < y; i++)
    {
        int c; cin >> c; 
        anime.push_back(c);
    }
    sort(anime.begin(), anime.end()); 
    int a = 1;
    for(int i = 0; i < anime.size(); i++) if(a == anime[i]) a++; 
    if((n+1) == a) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    return 0;
}
