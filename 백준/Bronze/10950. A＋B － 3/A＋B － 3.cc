#include<iostream>
using namespace std;

int main()
{
    int t, num1, num2;
    cin >> t ;
    
    for(int i = 1; i <= t; i++)
    {
        cin >> num1 >> num2;
        cout << num1 + num2 << "\n";
    }
    
    return 0;
}