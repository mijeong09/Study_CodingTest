#include<iostream>
using namespace std;

int main()
{
    string s;
    
    cin >> s;
    int cnt = s.length();
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '=' || s[i] == '-')
        {
            if (s[i - 1] == 'z' && s[i - 2] == 'd')
            {
                cnt -= 2;
            }
            else
                cnt--;
        }
        
        if (s[i] == 'j')
            if (s[i - 1] == 'l' || s[i - 1] == 'n')
                cnt--;
    }
    cout << cnt;
    return 0;
}