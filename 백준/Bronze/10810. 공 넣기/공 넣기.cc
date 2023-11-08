#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    int array[100] = {0, };
    cin >> n >> m;
    
    int a, b, c;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        for(int j = a; j <= b; j++)
        {
            array[j] = c;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}