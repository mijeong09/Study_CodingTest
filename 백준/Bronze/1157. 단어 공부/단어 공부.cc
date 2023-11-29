#include<iostream>
using namespace std;

int main()
{
    int alpha[26] = {0, };
    int max = 0, max_Idx;
    int count = 0;
    string s;
    
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 36; j++)
        {
            if (s[i] < 97)
                alpha[s[i] - 65]++;
            else
                alpha[s[i] - 97]++;
        }
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            max_Idx = i;
        }
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == max)
            count++;
    }
    
    if (count > 1)
        cout << '?';
    else
        cout << (char)(max_Idx + 65);
    
    return 0;
}