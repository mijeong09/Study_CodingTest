#include <iostream>
#include <string>
using namespace std;

int main() {

	int t;
	cin >> t;

	string str;
	int count = 0;

	for (int i = 0; i < t; i++) {
		cin >> str;

		if (str.length() <= 2) {
			continue;
		}
		else {
			for (int j = 0; j < str.length() - 1; j++) {
				if (str[j] != str[j + 1]) {
					if (str.find(str[j], j + 2) != string::npos) {
						count++;
						break;
					}
				}
			}
		}
	}
	cout << t - count;
    return 0;
}