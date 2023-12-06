#include<iostream>
using namespace std;

int main() {
    int b, result = 0;
    string n;
    string _char = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin >> n >> b;

    for (char c : n) {
        int currentDigit = _char.find(c);
        result = result * b + currentDigit;
    }

    cout << result;

    return 0;
}
