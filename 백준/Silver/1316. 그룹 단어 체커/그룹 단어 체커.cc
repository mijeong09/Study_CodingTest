#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
	int t;
	cin >> t;
    int cnt = t;

	for (int i = 0; i < t; i++) 
    {
		cin >> str;
        
			for (int j = 0; j < str.length() - 1; j++) 
            {
				if (str[j] != str[j + 1] && str.find(str[j], j + 2) != string::npos) 
                {
						cnt --;
						break;
				}
			}
	}
	cout << cnt;
    return 0;
}