#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a, b;
    int arr[100];
    
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    while(m-- > 0)
    {
        cin >> a >> b;
        reverse(arr + a, arr + b + 1);
    }
    for(int i = 1; i <= n; i++)
    {
        cout<< arr[i] <<" ";
    }
    return 0;
}