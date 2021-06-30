// Author: BaizaOP
// Date: 10/30/2020 
// Problem Name: 71A Way Too Long Words
// Problem Difficulty: 800
// Challenge: none
// Number of attempts: 2

#include <bits\stdc++.h>

using namespace std;

string solve(string in);
//fix this, I have no clue how chars work
// edit: this was actually not too bad once you understand the pain chars are. Oh and NEVER EVER use <str>.append()
// its a nightmare just WAITING to happen
int main()
{
    vector<string> output; // vector to add answers to
    int repeat; //this is that first integer being passed in
    cin >> repeat; //console in the first int
    for (int i = 0; i < repeat; i++)
    {
        string input; //the string input
        cin >> input; //conole in that input
        string ans = solve(input); // convert the string
        output.push_back(ans); // push it to the output vector
    }
    for (int i = 0; i < output.size(); i++)
    {
        if (i != output.size() - 1) 
        {
            cout << output[i] << endl; // this adds an endl if it is not the last line
        }
        else
        {
            cout << output[i]; // if it is the last line, it gets rid of the endl
        }
    }
    
}
string solve(string in)
{
    int size = in.size();
    string out;
    if (in.size() > 10)
    {        
        char c_oc, c_tc, c_last; // initing some chars        
        int int_oc, int_tc; // intiting some ints
        
        if (size % 10 < 2) // if onescounter is less than 2, decrement tens counter by 1 and add 8 to the ones counter
        {
            int_oc = (size % 10) + 48 + 8; 
            int_tc = (size /= 10) + 48 - 1;
        } 
        else 
        {
            int_oc = (size % 10) + 48 - 2; // if not, add 48 to convert to int to ascii int then sub by 2 
            int_tc = (size /= 10) + 48; // this you just convert straight to ascii int.
        }
                
        c_oc = int_oc; // int to char; "c_oc = (char) int_oc" works the same way by explicit casting instead of inplicit
        c_tc = int_tc; // int to char; "c_tc = (char) int_tc" works the same way by explicit casting instead of inplicit

        out.push_back(in[0]); //push_back the first letter of the word ONLY WORKS WITH CHARS!!
        
        if (!(c_tc == (char) 48))
        {
            out.push_back(c_tc); //push back the tens digit
        }
        out.push_back(c_oc); //push back the ones digit
        
        int last_spot = in.size() - 1; // last index in the string
        c_last = in[last_spot]; //getting that last letter
        out.push_back(c_last);  // pushing the last letter to the output string
        //cout << in.size() << endl; //debug
    }
    else
    {
        out = in;// if it is ten or less, then you just print the word
    }
    return out; //return the ouput string
}
