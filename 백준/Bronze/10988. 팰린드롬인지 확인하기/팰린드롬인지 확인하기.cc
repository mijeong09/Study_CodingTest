#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s, s1;
    int result = 1;
    
    cin >> s;
    s1 = s;
    reverse(s1.begin(), s1.end());
    
    if (s != s1)
        result = 0;
    
    cout << result;
    return 0;
}