// Author: BaizaOP
// Date: 11/10/2020
// Problem Name: 339A Helpful Maths
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 2

// A20J Ladder Number: 20

#include <bits\stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << s;
    }
    else 
    {
        vector<int> anime; 
        for(int i = 0; i < (int)s.size(); i++)
        {   
            if(i % 2 == 0){
                int x = ((int) s[i]) - 48;
                anime.push_back(x);
            }
        }
        sort(anime.begin(), anime.end());
        for (int i = 0; i < anime.size(); i++)
        {
            if (i != ((int)anime.size() - 1))
            {
                cout << anime[i] << "+";
            }
            else 
            {
                cout << anime[i];
            }
        }
        
    }

}
