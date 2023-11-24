#include<iostream>
using namespace std;

int main()
{
    string s;
    int result = 0;

    cin >> s;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'C')
            result += 3;
        else if (s[i] >= 'D' && s[i] <= 'F')
            result += 4;
        else if (s[i] >= 'G' && s[i] <= 'I')
            result += 5;
        else if (s[i] >= 'J' && s[i] <= 'L')
            result += 6;
        else if (s[i] >= 'M' && s[i] <= 'O')
            result += 7;
        else if (s[i] >= 'P' && s[i] <= 'S')
            result += 8;
        else if (s[i] >= 'T' && s[i] <= 'V')
            result += 9;
        else if (s[i] >= 'W' && s[i] <= 'Z')
            result += 10;
    }
    cout << result;
    return 0;
}