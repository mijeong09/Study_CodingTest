#include <iostream>
using namespace std;

int main()
{
    int a, cnt = 0;
    cin >> a;
    
    while (a>=0)
    {
        if(a%5==0)
        {
            cnt += a/5;
            cout << cnt;
            return 0;
        }

        a-=3;
        cnt++;
    }
    
    cout << -1 ;
    return 0;
}
 