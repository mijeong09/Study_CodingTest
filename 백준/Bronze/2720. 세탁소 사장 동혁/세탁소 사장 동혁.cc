#include<iostream>
using namespace std;

int t, c, change[4] = {25, 10, 5, 1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> t;
    while (t--)
    {
        cin >> c;
        for (int i = 0; i < 4; i++)
        {
            cout << c / change[i] << " ";
            c %= change[i];
        }
    }
    
    return 0;
}
