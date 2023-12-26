#include<iostream>
#include<algorithm>
using namespace std;

int a[3];
int main() 
{
    while (true)
    {
        for (int i = 0; i < 3; i++)
            cin >> a[i];

        if (a[0] == 0 && a[0] == a[1] && a[0] == a[2])
            break;
        
        sort(a, a + 3);
        if (a[2] >= a[1] + a[0])
            cout << "Invalid" << '\n';
        else if (a[0] != a[1] && a[1] != a[2] && a[0] != a[2])
            cout << "Scalene" << '\n';
        else
        {
            if (a[0] == a[1] && a[1] == a[2])
                cout << "Equilateral" << '\n';
            else
                cout << "Isosceles" << '\n';
        } 
    }
 
    return 0;
}
