// Author: BaizaOP
// Date: 11/11/2020
// Problem Name: 151A Soft Drinking
// Problem Difficulty: 800
// Challenge: A2OJ Ladder Less Than 1300
// Number of attempts: 1

// A20J Ladder Number: 25

#include <bits\stdc++.h>

using namespace std;

//hehe see the given for the problem, it was way to easy and the explaination is way too long to put here
//Problem 151A

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int numberoffriends, numberofbottles, mlperbottle, numberoflimes, slicesperlime, saltamount, drinkperbottle, saltperbottle;
    cin >> numberoffriends >> numberofbottles >> mlperbottle >> numberoflimes >> slicesperlime >> saltamount >> drinkperbottle >> saltperbottle;
    vector<int> anime;
    int howmanybottles = (numberofbottles * mlperbottle) / drinkperbottle; anime.push_back(howmanybottles); //cout << "hmb: " << howmanybottles;
    int howmanyslices = numberoflimes*slicesperlime; anime.push_back(howmanyslices); //cout << "\nhmslices: " << howmanyslices;
    int howmuchsalt = saltamount / saltperbottle; anime.push_back(howmuchsalt); //cout << "\nhmsalt: " << howmuchsalt << "\n\n";
    sort(anime.begin(), anime.end());
    cout << (anime[0] / numberoffriends);
}
// g++ -std=c++11 -O2 -Wall 25_151A.cpp -o test
/*testcase:
3 4 5 10 8 100 3 1
ans
2
*/
