#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    int min = 1000001;
    int max = -1000001;
    int input;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        if(input < min)
        {
            min = input;
        }
        if(input > max)
        {
            max = input;
        }
    }
    cout << min << " " << max;
    return 0;
}