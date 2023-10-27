#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int i = 1; i <= (n / 4); i++)
    {
        cout << "long" << " ";
    }
    cout << "int";
    
    return 0;
}