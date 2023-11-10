#include<iostream>
using namespace std;

int main()
{
    int num;
    int array[31] = {0, };
    
    for(int i = 1; i <= 28; i++)
    {
        cin >> num;
        array[num] = 1;
    }
    for(int i = 1; i <= 30; i++)
    {
        if(array[i] == 0)
        {
            cout << i << '\n';
        }
    }
    return 0;
}