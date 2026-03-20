#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int maxCount = 1;
    int currentCount = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
        }
    }

    cout << maxCount << endl;
}