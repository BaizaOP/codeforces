// Author: BaizaOP
// Date: 6/6/2021
// Problem Number: 281A
// Problem Name: Word Capitalization 
// Challenge: none
// Number of attempts: 1 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    cin >> x;

    char a = x[0];
    
    int charcode = (int)a;
    int conversion_factor = (int)'a' - (int)'A';
   
    if((charcode >= 97) && (charcode <= 122))
    {
        x[0] = (char)(charcode - conversion_factor);
    }
   
    cout << x << endl;
    return 0;
}


