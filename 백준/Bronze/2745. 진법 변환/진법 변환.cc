#include<iostream>
using namespace std;

int b, result = 0;
string n, _char = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
    cin >> n >> b;
    
    for (int i = 0; i < n.length(); i++)
        result = result * b + _char.find(n[i]);
    
    cout << result;
    return 0;
}