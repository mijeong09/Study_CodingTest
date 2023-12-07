#include<iostream>
#include<algorithm>
using namespace std; 

int b, n, remain;
string ans = "";

int main()
{
    cin >> n >> b;
    
    while (n > 0)
    {
        remain = n % b;
        
        if (remain <= 9)
            ans += remain + '0';
        else ans += remain + 'A' - 10;
        
        n /= b;
    }
    
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}