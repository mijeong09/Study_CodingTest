#include<iostream>
using namespace std;

int main()
{
    int array[9][9], y, x, max = 0;
    
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            cin >> array[i][j];
            
            if (array[i][j] >= max)
            {
                max = array[i][j];
                y = i + 1;
                x = j + 1;
            }
        }
    
    cout << max << '\n' << y << ' ' << x;
    return 0;
}