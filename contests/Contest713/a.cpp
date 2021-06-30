#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	vector<int> answers;
	cin >> num;
	for(int i = 0; i < num; i++)
	{
		int arr;
		cin >> arr;
		vector<int> anime;
		
		for(int j = 0; j < arr; j++)
		{
			int x;
			cin >> x;
			anime.push_back(x);
		}
		int same = -1;
		for(int n = 0; n < anime.size() - 1; n++)
		{
			if(anime[n] == anime[n+1])
			{
				same = anime[n];
				break;
			}
		}
		int index = -1;
		for(int n = 0; n < anime.size(); n++)
		{
			if(anime[n] != same)
			{
				index = n + 1;
				break;
			}
		}
		answers.push_back(index);
	}	
	for(int i : answers)
	{
		cout << i << endl;
	}
}
