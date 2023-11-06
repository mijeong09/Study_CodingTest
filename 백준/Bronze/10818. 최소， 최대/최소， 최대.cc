#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    int a[1000000];
    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    
    sort(a, a + N);
    cout << a[0] << " " << a[N - 1];
    
    return 0;
}