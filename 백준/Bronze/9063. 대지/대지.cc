#include <iostream>
using namespace std;

int main()
{
    int N,x,x1(-10001),x2(10001),y,y1(-10001),y2(10001);
    
    for(cin>>N;N--;)
    {
        cin >> x >> y;

        if (x>x1) x1=x;
        if (y>y1) y1=y;

        if (x<x2) x2=x;
        if (y<y2) y2=y;
    }
    cout << (x1-x2)*(y1-y2);
    return 0;
}