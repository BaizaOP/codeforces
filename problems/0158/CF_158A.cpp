// Author: BaizaOP
// Date: 10/30/2020 
// Problem Name: 158A Next Round
// Problem Difficulty: 800
// Challenge: none
// Number of attempts: 4

#include <bits\stdc++.h>

using namespace std;

/*
You are given a size and a looking index
you are then given a vector of numbers of the size above
you are looking at the number at the given looking index
you set the score to equal the looking index
if the next place in the vector is also the same number at the looking index then increase the spot and the score
keep going until the number changes or the array is over
*/
int solve(vector<int> in, int looking);
int main()
{
    int repeat, looking; // where looking is the index of what you are looking at
    cin >> repeat >> looking;
    vector<int> input(repeat);
    for (int i = 0; i < repeat; i++)
    {
        int in;
        cin >> in;
        input[i] = in;
    }
    
    cout << solve(input, looking) << endl;
}
int solve(vector<int> input, int looking)
{
    int output = 0;
    if (input[looking - 1] == 0) // the zero case is tricky because you still have to consider 
                                 // that there might be people before the looking index that aren't zero
    {
        for(int i = 0; i < input.size(); i++) // loop through the whole array
        {
            if (input[i] == 0) // if the number at that place in the array is zero, then break out of EVERYTHING
            {
                break;
            }
            else
            {
                output++; // else increment output as the number at this place was greater than zero
            }
        }
    }
    else
    {
        for (int i = looking - 1; i < input.size(); i++) // loop thru the array from looking place to the end
        {
            if (i == looking - 1) //if the size of the array is the same as the looking index, the output is the looking index
            {
                output = looking;
            }
            else if (input[i] == input[looking - 1])
            {   
                output++; //else check if the next number in line is the same as the number at the looking index
            }        
        }
    }
    return output;
}
/*
test case 1: 
5 3
4 4 2 2 1
correct answer 4
*/
