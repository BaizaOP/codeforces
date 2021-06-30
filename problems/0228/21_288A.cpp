// Author: BaizaOP
// Date: 11/11/2020
// Problem Name: 228A Is your horseshoe on the other hoof?
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 21

// secretly a deep philosophy question lmao

#include <bits\stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int w, x, y, z;
    cin >> w >> x >> y >> z;
    vector<int> anime = {w, x, y, z};
    for (int i = 0; i < anime.size(); i++)
    {
        for (int j = 0; j < anime.size(); j++)
        {
            if ((i!=j) && (anime[i]==anime[j]) && (anime[j] != -1) && (anime[j] != -1))
            {
                anime[j] = -1;
            }
        }
    }
    int count = 0;
    for (int i : anime)
    {
        if (i == -1)
        {
            count++;
        }
    }
    cout << count;
}
