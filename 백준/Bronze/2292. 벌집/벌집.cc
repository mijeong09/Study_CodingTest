#include<iostream>
using namespace std;

int n, ans = 1, num = 1;
int main()
{
    cin >> n;
    
    while(n > num)
    {
        num += (6 * ans);
        ans++;
    }
    
    cout << ans;
    return 0;
}