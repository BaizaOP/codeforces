// Author: BaizaOP
// Date: 11/09/2020
// Problem Name: 227B Effective Approach
// Problem Difficulty: 1100
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 30

// lol I totally cheated. I need to get better at some easier problems 

#include <bits\stdc++.h>

using namespace std;
typedef long long LL;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int size;
    cin >> size;
    vector<int> anime(1e5 + 3);
    for(int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        anime[x] = i+1;
    }

    long long forwards = 0;
    long long backwards = 0;
    
    vector<long> queries;

    long query_count;
    cin >> query_count;
    for (int i = 0; i < query_count; i++)
    {   
        int x;
        cin >> x;
        forwards += anime[x];
        backwards += ((size + 1) - anime[x]);
    }
    cout << forwards << " " << backwards;

}
