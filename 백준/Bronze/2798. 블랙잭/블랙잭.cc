#include <iostream>
using namespace std;

int main()
{   
    int N, M, total;
    int max = 0;

    cin >> N >> M;
    int cards[N];
    
    for (int i = 0; i < N; i++)
        cin >> cards[i];

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                total = cards[i] + cards[j] + cards[k];
                
                if(total > M)
                    continue;
                
                if(max < total)
                    max = total;
            }
        }
    }
        
    cout << max;
    return 0;
}