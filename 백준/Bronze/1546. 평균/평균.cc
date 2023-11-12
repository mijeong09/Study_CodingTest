#include<iostream>
using namespace std;

int main()
{
    int n;
    float array[1000];
    int high = 0;
    float sum = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
        if(array[i] > high)
        {
            high = array[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        array[i] = array[i] / high * 100;
        sum += array[i];
    }
    cout << sum / n;
    return 0;
}