// Author: BaizaOP
// Date: 11/07/2020
// Problem Name: 271A Beautiful Year
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1 

// A20J Ladder Number: 5

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int in; // input from the console
    cin >> in; // c in the int
    vector<int> anime; // vector with each of the individual digits
    in++; // long story short, we don't want to check the current number, we want to check the next.
    while (in>0)
    {
        anime.push_back(in % 10); // push back the last digit of the array
        in -= (in % 10); // subtract the number by its last digit to create a zero
        in /= 10; // div by 10 to get the new num
    }
    int size = anime.size(); // size of the vector

    vector<int> temp;
    for (int i = size - 1; i >= 0; i--) 
    {
        temp.push_back(anime[i]); 
    }
    anime = temp;
    /*cout << "this should out the number you gave in: ";
    for (int i : temp)
    {
        cout << i;
    }
    cout << "\n\nif so... congrats! \n\n"; 
    
    DEBUG.... NANI!?!?
    
    */ 

    bool duplicate = false; // duplicate check. if false in the end, the number has no dup digits
    bool correct = false; // bool to end the forever loop
    int count = 0; // for debug purposes
    while (!correct) // the forever loop
    {
        // the duplicate check
        for (int i = 0; i < size; i++) // for every index in the vector
        {
            for (int j = 0; j < size; j++) // check every other index
            {
                if (i != j) // given it is not itself
                {
                    if (anime[i] == anime[j]) //if they are the same
                    {
                        duplicate = true; // we got some duplicates
                       
                    }
                }
            } 
        }
        if (!duplicate) // if no duplicates
        {
            break; // end the loop
        } 
        else // there is a duplicate
        {
            
            bool nine = false; // if nine bool, is this is true then we have to add one ex 
            /* 
            199 + 1 = (1 * 100) + (9 * 10) + (9 * 1) + 1
                    = (1 * 100) + (9 * 10) + ((9 + 1) * 1)
                    = (1 * 100) + (9 * 10) + (10 * 1)
                    = (1 * 100) + ((9 + 1) * 10) + (0 * 1)
                    = (1 * 100) + (10 * 10) + (0 * 1)
                    = ((1 + 1) * 100) + (0 * 10) + (0 + 1)
                    = (2 * 100) + (0 * 10) + (0 + 1)
                    = 200 
            basically propagate the one until the number you add 1 is not 9, then just add 1
            */
            for (int k = size - 1; k >= 0; k--) // this will loop through the array
            {
                if (k == size - 1) //if this is the first number in the array
                {
                    if (anime[k] == 9) // if it is nine
                    {
                        anime[k] -= 9; // subtract by nine
                        nine = true; // now nine is true
                    }
                    else 
                    {
                        anime[k] += 1; // nine will forever be false
                    }
                }
                else if ((nine == true) && (anime [k] == 9)) // if nine is true and the next num is a nine, then "propagate" the one
                {
                    
                    anime[k] -= 9;// sub by nine
                    nine = true; // nine is still true
                    
                }
                else if ((nine == true) && (anime[k] < 9)) // if nine is true and the next numver is not nine, just add one.
                {
                    anime[k] += 1; // add one
                    nine = false; // end the sequence.
                }
                if ((nine == true) && (k == 0))
                {
                    vector<int> temp;
                    temp.push_back(1);
                    for (int i : anime)
                    {
                        temp.push_back(i);
                    }
                    anime = temp;
                    size++;
                }
            }
            duplicate = false;
        }
        count++; // again more debug crap
        if (count > 1000)
        {
            correct = true;
        }
        /*cout << "the num: "; LOTS AND LOTS OF DEBUG
        for (int i : anime) // for number in vector
        {
            cout << i; // output the number to the console!
        }
        cout << endl;*/
    }
    //cout << "Success? Heres the count: " << count << " and the int: "; // hope and pray it works ANY DEBUGERS!?!? (lol ludwig from yt meme)
    for (int i : anime) // for number in vector
    {
        cout << i; // output the number to the console!
    }
    //cout << "\n\n have a great day.\n"; // bye~ 
}
