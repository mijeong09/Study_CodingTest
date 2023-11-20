#include<iostream>
using namespace std;

int main()
{
    int n;
    string num;
    int sum = 0;
    cin >> n >> num;
    for(int i = 0; i < n; i++)
    {
        sum += num[i] - '0';
    }
    cout << sum;
    return 0;
}