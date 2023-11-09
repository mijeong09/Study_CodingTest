#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int array[100];
    for(int i = 1; i <= n; i++)
    {
        array[i] = i;
    }
    
    int temp = 0;
    int a, b;
    for(int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }
    
    for(int i = 1; i <= n; i++)
    {
        cout << array[i] << ' ';
    }
    return 0;
}