#include<iostream>
using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << int(x1 ^ x2 ^ x3) << " " << int(y1 ^ y2 ^ y3);
    
    return 0;
}