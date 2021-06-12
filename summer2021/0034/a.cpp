// Author: BaizaOP
// Date: 6/11/2021
// Problem Name: 34A Reconnaissance 2
// Problem Difficulty: 800
// Summer 2021 Challenge Number: 6 
// Number Today: 1
// Number of attempts: 1

// like I have no clue how it even works, it just does lmao

#include <bits/stdc++.h>

using namespace std;

int abso(int);

int main()
{
    int num; cin >> num;
    vector<int> anime(num+1);
    anime[0] = -1;
    for(int i = 1; i <= num; i++)
    {
        int x; cin >> x;
        anime[i] = x;
    }
    /*
    for(int i : anime)
    {
        cout << i << endl;
    }
    */
    int index1 = anime.size() - 1;
    int index2 = 1;
    int min = abso(anime[index1] - anime[index2]);
    for(int i = 2; i < anime.size(); i++)
    {
        int newmin = abso(anime[i] - anime[i-1]);
        if(newmin < min)
        {
            index1 = i-1;
            index2 = i;
            min = newmin;
        }
    }
    cout << index1 << " " << index2 << endl; 
    return 0;
}

int abso(int x)
{
    if(x >= 0)
        return x;
    else
        return ((-1) * x);
}
