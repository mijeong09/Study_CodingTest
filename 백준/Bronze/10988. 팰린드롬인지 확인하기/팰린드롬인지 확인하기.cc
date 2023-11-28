#include<iostream>
using namespace std;

int main()
{
    string s;
    int result = 1;
    
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int j = s.length() - 1 - i;
        
        if (s[i] != s[j])
        {
            result = 0;
            break;
        }
    }
    
    cout << result;
    return 0;
}