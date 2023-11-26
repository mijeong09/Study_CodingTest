#include<iostream>
using namespace std;

int main()
{
    int num[6];
    
    for (int i = 0; i < 6; i++)
        cin >> num[i];
    
    cout << 1- num[0] << " ";
    cout << 1- num[1] << " ";
    cout << 2- num[2] << " ";
    cout << 2- num[3] << " ";
    cout << 2- num[4] << " ";
    cout << 8- num[5];

    return 0;
}