// Author: BaizaOP
// Date: 6/5/2021
// Problem Number: 546A 
// Problem Name: Soldier and Bananas
// Number of attempts: 1  

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int price;
    int numbananas;
    long money;
   
    cin >> price >> money >> numbananas;
   
    /*long total = 0;
    for(int i = 1; i <= numbananas; i++)
    {
        total += price*i;
    }
    */
   
    // partial sum of arithmetic sequence
    // recall: sn = n(a1 + an)/2
    long bettertotal = 0; 
    bettertotal += price; // adding a1
    bettertotal += (price * numbananas); // adding an
    bettertotal *= numbananas; // multiplying by n
    bettertotal /= 2; // dividing by 2
    
    //cout << "total " << total << endl;
    //cout << "bettertotal " << total << endl;
    
    long borrowed = bettertotal - money;
    if(borrowed <= 0)
        borrowed = 0;

    cout << borrowed << endl; 
}
