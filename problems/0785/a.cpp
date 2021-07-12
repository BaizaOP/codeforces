// Author: BaizaOP
// Date: 7/11/2021
// Problem Name: 785A Anton and Polyhedrons
// Problem Difficulty: 800
// Challenge: Summer 2021 Streak Challenge
// Number of attempts: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        string x; cin >> x;
        if(x == "Tetrahedron") counter += 4;
        else if (x == "Cube") counter += 6;
        else if (x == "Octahedron") counter += 8;
        else if (x == "Dodecahedron") counter += 12;
        else if (x == "Icosahedron") counter += 20;
        else cout << "SOMETHING WENT WRONG OOOFOFF" << endl;
    }
    cout << counter << endl;
    return 0;
}
