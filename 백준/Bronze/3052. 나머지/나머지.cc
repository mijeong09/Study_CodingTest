#include<iostream>
using namespace std;

int main()
{
    int num;
    int mod[42] = {0, };
    int count = 0;
    
    for(int i = 0; i < 10; i++)
    {
        cin >> num;
        mod[num % 42]++;
    }
    for(int i = 0; i < 42; i++)
    {
        if(mod[i] != 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}