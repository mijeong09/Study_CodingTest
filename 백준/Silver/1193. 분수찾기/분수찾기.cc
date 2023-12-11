#include<iostream>
using namespace std;

int x, n = 1, cnt = 1;
int main()
{
    cin >> x;
    
    while (x > cnt)
    {
        x -= cnt;
        cnt++;
    }
    
    if (cnt % 2 == 1)
        cout << cnt + 1 - x  << "/" << x;
    else
        cout << x << "/" << cnt + 1 - x;
    
    return 0;
}