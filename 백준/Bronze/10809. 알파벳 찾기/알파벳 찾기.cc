#include<iostream>
#include<algorithm>
using namespace std;
 
int main() 
{
	string S;
	cin >> S;
 
	int alpa[26];
	fill_n(alpa, 26, -1);
 
	for (int i = 0; i < S.length(); i++)
	{
		if (alpa[S[i] - 'a'] == -1)
		{
			alpa[S[i] - 'a'] = i;
		}
	}
 
	for (int i = 0; i < 26; i++)
	{
		cout << alpa[i] << ' ';
	}
 
	return 0;
}