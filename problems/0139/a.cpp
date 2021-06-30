// Author: BaizaOP
// Date: 6/10/2021
// Problem Name: 139A Petr and Book
// Problem Difficulty: 1000
// Challenge: Summer 2021 1000 Challenge
// Number of attempts: 1 

// Summer 2021 Challenge Number: 4
// Number Today: 4

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int pages; cin >> pages;
    vector<int> anime = {-1};
    for(int i = 0; i < 7; i++)
    {
        int x; cin >> x;
        anime.push_back(x);

    }
    /*
    for(int i : anime)
    {
        cout << i << endl;
    }
    */
    int index = 1; 
    while(pages > 0)
    {
        pages -= anime[index];
        if(pages <= 0)
            break;

        index++;
       
        if(index > 7)
            index  = 1;
    }
    
    cout << index << endl;
    return 0; 
}
