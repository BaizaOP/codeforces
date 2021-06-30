// Author: BaizaOP
// Date: 6/7/2021
// Problem Number: 266A
// Problem Name: Stones on the Table
// Challenge: none
// Number of attempts: 1

// from what I gather... this is a simple deal of deleting duplicates in an array. Or is it?
// yes it was :)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; 
    string anime;
    cin >> n >> anime;
    int counter = 0;
    while(true) 
    { 
        bool piss = false;
        for(int i = 0; i < anime.size(); i++)
        {
            if(i > 0)
            {
                if(anime[i] == anime[i-1])
                {
                    counter++;
                    anime.erase(anime.begin()+i);
                    piss = true;
                    i = anime.size() + 5;
                }
            }
        }
        if(piss)
        {
            piss = false;
        }
        else
        {
            break;
        }
    } 
    cout << counter << endl;

    return 0;
}
