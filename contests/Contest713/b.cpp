#include <bits/stdc++.h>

using namespace std;

int main()
{
	int rep;
	cin >> rep;
	int counter = 0;
	vector<vector<char>> answers;
	for(int a = 0; a < rep; a++)
	{
		vector<vector<char>> anime;	

		//creating grid
		int grid;
		cin >> grid;
		for(int i = 0; i < grid; i++)
		{
			anime.push_back({});
			for(int j = 0; j < grid; j++)
			{	
				char x;
				cin >> x;
				anime[i].push_back(x);
			}
		}


		//figuring out positions of astricks!
		int x1{-1}, y1{-1}, x2{-1}, y2{-1};
		for(int i = 0; i < grid; i++)
		{
			for(int j = 0; j < grid; j++)
			{
				if(anime[i][j] == '*')
				{
					x1 = j;
					y1 = i;
					j = 1000000000;
					i = 1000000000;
				}
			}
		}
		for(int i = 0; i < grid; i++)
		{
			for(int j = 0; j < grid; j++)
			{
				if((i == y1) && (j == x1))
				{
				}
				else
				{
					if(anime[i][j] == '*')
					{	
						y2 = i;
						x2 = j;
						j = 1000000000; 
						i = 1000000000;
					}
				}
			}
		}

		//finishing the rectangle
		if((x1 != x2) && (y1 != y2)) //the points are diagonal to each other ex 2,0 and 0,2
		{
			anime[y1][x2] = '*';
			anime[y2][x1] = '*';
		}
		else if(x1 == x2) //on the same column
		{
			int diff = 1;
			if((x1 + diff) > grid - 1)
			{
				anime[y1][x1 - diff] = '*';
				anime[y2][x2 - diff] = '*';
			}
			else
			{
				anime[y1][x1 + diff] = '*';
				anime[y2][x2 + diff] = '*';
			}
		}
		else if(y1 == y2) //on the same row
		{
			int diff = 1;
			if((y1 + diff) > grid - 1)
			{
				anime[y1 - diff][x1] = '*';
				anime[y2 - diff][x2] = '*';
			}
			else
			{
				anime[y1 + diff][x1] = '*';
				anime[y2 + diff][x2] = '*';
			}
		}
		for(auto i : anime)
		{
			answers.push_back({});
			for(char x : i)
			{
				answers[counter].push_back(x);
			}
			counter++;	
		}
	}
	for(auto i : answers)
	{
		for(char x : i)
		{
			cout << x;	
		}
		cout << endl;
	}
}
