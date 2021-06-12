// Author: BaizaOP
// Date: 6/11/2021
// Problem Name: 320A Magic Numbers
// Problem Difficulty: 900
// Summer 2021 Challenge Number: 9 
// Number Today: 4
// Number of attempts: 2

// a bunch of if statements... i guess
// my implementation was correct, but i accidentally had 1 too many pop_backs for the string and it went haywire...
// IT WAS RIGHT TOO
// I dont know how that got into there...

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string anime; cin >> anime;
    while(true)
    {
        int size = anime.size();
        if(size == 0)
        {
            cout << "YES" << endl;
            return 0;
            break;
        }
        else if (anime[size - 1] == '4')
        {
            if(size > 2)
            {
                if(anime[size - 2] == '4' && anime[size - 3] == '1')
                {
                    anime.pop_back();
                    anime.pop_back();
                    anime.pop_back();
                }
                else if (anime[size - 2] == '1')
                {
                    anime.pop_back();
                    anime.pop_back();
                }
                else
                {
                    cout << "NO" << endl;
                    return 0;
                    break;
                }
            }
            else if (size == 2)
            {
                if (anime[size - 2] == '1')
                {
                    anime.pop_back();
                    anime.pop_back();
                }
                else
                {
                    cout << "NO" << endl;
                    return 0;
                    break;
                }
            }
            else
            {
                cout << "NO" << endl;
                return 0;
                break;
            }
        }
        else if (anime[anime.size() - 1] == '1')
        {
            anime.pop_back();
        }
        else
        {
            cout << "NO" << endl;
            return 0;
            break;
        }
    }
    return 0;
}
