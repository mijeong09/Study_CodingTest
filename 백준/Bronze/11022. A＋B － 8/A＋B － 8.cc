#include<iostream>
using namespace std;

int main()
{
    int T,a, b;
    cin >> T;
    //Case #x: A + B = C
    for(int i = 1; i <= T; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i <<": " << a << " + " << b << " = " << a + b << "\n";
    }
    return 0;
}