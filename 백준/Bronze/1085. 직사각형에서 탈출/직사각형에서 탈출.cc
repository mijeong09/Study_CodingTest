#include<iostream>
using namespace std;

int x,y,w,h;
int X,Y,Z;
int main()
{
    cin >> x >> y >> w >> h;
    
    X = (w - x) < x ? (w - x) : x;
    Y = (h - y) < y ? (h - y) : y;

    Z = (X < Y) ? X : Y;

    cout << Z;
    
    return 0;
}