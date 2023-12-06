#include<iostream>
using namespace std;

int square[100][100] = {0, }, n, w, h, result = 0;
int main()
{
    cin >> n;
    
    while (n--)
    {
        cin >> w >> h;
        for (int i = w; i < w + 10; i++)
        {
            for (int j = h; j < h + 10; j++)
                if (square[i][j] == 0)
                {
                    result++;
                    square[i][j] = 1;
                }
        }
    }
    
    cout << result;
    return 0;
}