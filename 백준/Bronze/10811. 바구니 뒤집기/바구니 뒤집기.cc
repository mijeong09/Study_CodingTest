#include<iostream>
using namespace std;

int main()
{
    int array[101];
    
    int n, m, a, b, temp;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        array[i] = i;
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        for (int j = a; j < b; j++)
        {
            temp = array[j];
            array[j] = array[b];
            array[b] = temp;
            b--;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}