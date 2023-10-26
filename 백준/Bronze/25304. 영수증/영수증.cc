#include<iostream>
using namespace std;

int main()
{
    int x, n, price, num;
    int result = 0;
    cin >> x >> n;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> price >> num;
        result += price * num;
    }
    if(x == result)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}