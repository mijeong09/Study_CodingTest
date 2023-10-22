#include<iostream>
using namespace std;

int main()
{
    int h, m, t;
    cin >> h >> m >> t;
    
    int minute = (h * 60 + m) + t;
    int hour = minute / 60 % 24;
    minute %= 60;
    
    cout << hour << " " << minute;
    
    return 0;
}