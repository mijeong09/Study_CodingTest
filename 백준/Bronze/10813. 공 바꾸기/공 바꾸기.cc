#include<iostream>
//#include<algorithm>
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
    
    int a, b;
    for(int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        swap(array[a], array[b]);
    }
    
    for(int i = 1; i <= n; i++)
    {
        cout << array[i] << ' ';
    }
    return 0;
}