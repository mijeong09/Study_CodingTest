#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, v;
    int a[201]={};
    cin >> N;
    for(int i=0; i<N; i++)
    {
        int t;
        cin >> t;
        a[t+100]++;
    }
    cin >> v;
    cout << a[v+100];
    
    return 0;
}