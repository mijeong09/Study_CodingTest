#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, X;
    cin >> N >> X;
    
    int a;
    for(int i = 0; i < N; i++)
    {
        cin >> a;
        
        if(a < X)
        {
            cout << a << " ";
        }
    }
    return 0;
}