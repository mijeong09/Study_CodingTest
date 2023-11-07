#include<iostream>
using namespace std;

int main()
{
    int num, index;
    int max = 0;
    
    for(int i = 0; i < 9; i++)
    {
        cin >> num;
        if(num > max)
        {
            max = num;
            index = i;
        }
    }
    cout << max << "\n" << index + 1;
    return 0;
}