// Author: BaizaOP
// Date: 11/07/2020
// Problem Name: 275A Lights Out
// Problem Difficulty: 900
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 6

#include <bits\stdc++.h>

using namespace std;

/* 
the gimmic to this one was simple
given a 3 by 3 set of button presses, where one button press toggles itself and its neighbors directly adjacent (no diags) and the lights all on initially
find the ending state
ex:
in
1 0 0
0 0 0
0 0 0 
out
0 0 1
0 1 1
1 1 1
see below for gimmic:
*/

void nope(int &x); //prototype the helper BOI

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); //helps with console in and out
    vector<vector<int>> lights= {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}}; // the lights vector of vectors
    /*
    1 1 1
    1 1 1
    1 1 1
    */
    int size = lights[1].size(); // random size var becuz why not
    vector<vector<int>> anime; // YOOOOOOOOO another cameo from the famed anime thingmajang
    for (int i = 0; i < size; i++) // looping for the input
    {
       vector<int> temp; // I created a temp vector that I would add on to anime
       for (int j = 0; j < size; j++)
       {
        //random space weeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee   :)
           int x; // int for the input
           cin >> x; // console in the input
           temp.push_back(x); // push to the back of the vector
       }
       anime.push_back(temp); // push the temp vector to the back of the main (anime) vec of vecs
    }
    for (int i = 0; i < size; i++) //this converts a number to its parity (1 or 0)
    {
        for (int j = 0; j < size; j++) // i was for the rows and j is for columns
        {
        if (anime[i][j] % 2 == 0) // taking the parity, if even then 0
            {
                anime[i][j] = 0;
            }       
            else
            {
                anime[i][j] = 1; // if odd then 1
            }
        }
    }    
    for (int i = 0; i < size; i++) // this is the loopy boi, say hi :)
    {
        for (int j = 0; j < size; j++) // i is for rows and j is for cols again. What I mean is that i iterates through each row and j
                                       // iterates through each index, or column, in the row
        {
            if (anime[i][j]==1) // if the button was toggled
            {
                nope(lights[i][j]); // negate the state for the button
                
                // this was a system of creating tags for if I can go up or not, but i just scratched that plan 
                // because I can just 'not' what is in the parenthesis after the if. But hey, at least this was a lesson learned!
                /*
                bool up = true;
                if (i == 0)
                {
                    up = false;
                }
                
                bool down = true;
                if (i == 2)
                {
                    down = false;
                }
                
                bool left = true;
                if (j == 0)
                {
                    left = false;
                }
                
                bool right = true;
                if (j == 2)
                {
                    right = false;
                }
                */
                if (i != 0) //if not top row,toggle up
                {
                    nope(lights[i-1][j]);
                }
                if (i != 2) //if not bottom row,toggle down
                {
                    nope(lights[i+1][j]);
                }
                if (j != 0) //if not left column,toggle left
                {
                    nope(lights[i][j-1]);
                }
                if (j != 2) //if not right column,toggle right
                {
                    nope(lights[i][j+1]);
                }
                //basically if you can toggle in that direction, I COMMAND YOU TO MUAHAHAHAHAHA :)
            }
        }
    }
    for (auto i : lights) // this is just a fancy format for a for loop like the one above, but has limited uses
    {
        for (int j : i) // but it is great for printing out a vector! bascially "for index in container"
        {
            cout << j;
        }
        cout << "\n";
    }
}

void nope(int &x) // this is that helper function
{
    if (x == 1) // if 1
    {
        x = 0; // then change to 0
    }
    else
    {
        x = 1; // if not 1, then its 0, so change to 1
    }
}
/*
basically the trick is noticing that any even numbered toggle does nothing, and any odd numbered toggle is just toggling it once
so i convert the in:
3 0 2
1 4 5
2 3 7
to
1 0 0 
1 0 1
0 1 1
then i just go one by one and toggle. I was at first worried about the order of operations but its the same whether you do bottom right then bottom center or bottom center then bottom right 
I created a func named nope to be a negation function passing by reference instead of doing all the logic in every thing. Other than that, I will add comments to every line.
*/
