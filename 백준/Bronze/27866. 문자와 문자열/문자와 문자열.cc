#include<iostream>
#include<string>
using namespace std;

int main()
{
    int index;
    string s;
    
    cin >> s >> index;
    cout << s[index - 1];
    
    return 0;
}