#include<iostream>
using namespace std;

int n, dot = 2, ans = 0;
int main()
{
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        dot += dot - 1;
    }
    
    cout << dot * dot;
    return 0;
}