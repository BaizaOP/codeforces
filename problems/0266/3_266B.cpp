// Author: BaizaOP
// Date: 11/03/2020
// Problem Name: 266B Queue at the School
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 3

#include <bits\stdc++.h>

using namespace std;

/* given a row of students, B (boys) or G (girls), if a boy is in front of a girl in one cycle, then he will be behind her the next. Repeat this process the
given amount of cycles. output the ending array. */

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int len, time;
    cin >> len >> time;
    vector<char> anime;
    for (int i = 0; i < len; i++)
    {
        char x;
        cin >> x;
        anime.push_back(x);
    }
    vector<int> next_index;
    
    bool switched = false;
    for (int i = 0; i < time; i++)
    {
        for (int j = 0; j < anime.size(); j++){
            if (j < len - 1)
            {
                if (switched == false)
                {
                    if ((anime[j] == 'B') && (anime[j+1] == 'G'))
                    {
                        next_index.push_back(j+1);
                        next_index.push_back(j);
                        switched = true;
                    }
                    else 
                    {
                        next_index.push_back(j);
                    }
                }
                else 
                {
                    switched = false;
                }
            }
            else if (switched == false)
            {
                next_index.push_back(j);
            }
        }
        vector<char> temp;
        /*std::cout << "ni: ";
        for (int i : next_index)
        {
            std::cout << i << " ";
        }
        std::cout << "\n";*/
        for (int j = 0; j < anime.size(); j++)
        {
            temp.push_back(anime[next_index[j]]);
        }
        anime = temp;
        /*std::cout << "anime: ";
        for(char c : anime)
        {
            std::cout << c;
        }
        std::cout << "\n\n";*/
        next_index = {};
        switched = false;
    }
    for(char c : anime)
    {
        std::cout << c;
    }
    std::cout << "\n";
}

/* test case 1:
7 3
GBGGBGG
ans:
GGGGBGB
sol:
GBGGBGG -> GGBGGBG -> GGGBGGB -> GGGGBGB
*/
