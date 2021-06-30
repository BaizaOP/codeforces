#include <bits\stdc++.h>

using namespace std;

int find_index (char c);
vector<int> convert (string s);


int main()
{
	string s;
	cin >> s;
	if(s.size() == 1)
	{
		cout << "YES";
		return 0;
	} else if (s.size() == 2)
	{
		cout << "YES" << endl;	
		return 0;
	}
	else
	{
		vector<int> anime = convert(s);
		for(int i = 0; i < anime.size() - 2; i++)
		{
			if(((anime[i] + anime[i+1]) % 26) != anime[i+2] % 26)
			{
				cout << "NO" << endl;	
				return 0;	
			} 	
		}
		cout << "YES" << endl;
	}
}

int find_index (char c)
{
	int index_of_a = 'A';
	int n = c;
	return (n - index_of_a);
}

vector<int> convert (string s)
{
	vector<int> anime;
	for (char c : s)
	{
		anime.push_back(find_index(c));
	}
	return anime;
}
