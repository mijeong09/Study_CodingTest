#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int i, count = 0;
    
    cin >> word;
    
    for (i = 0; i < word.length(); i++) {
        if (word[i] >= 'A' && word[i] <= 'C') {
            count += 3;
        } else if (word[i] >= 'D' && word[i] <= 'F') {
            count += 4;
        } else if (word[i] >= 'G' && word[i] <= 'I') {
            count += 5;
        } else if (word[i] >= 'J' && word[i] <= 'L') {
            count += 6;
        } else if (word[i] >= 'M' && word[i] <= 'O') {
            count += 7;
        } else if (word[i] >= 'P' && word[i] <= 'S') {
            count += 8;
        } else if (word[i] >= 'T' && word[i] <= 'V') {
            count += 9;
        } else if (word[i] >= 'W' && word[i] <= 'Z') {
            count += 10;
        }
    }
    
    cout << count;
    
    return 0;
}
