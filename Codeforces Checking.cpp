#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCount; cin >> testCount;
    char testChar;
    string testString = "codeforces";

    for (int i = 0; i < testCount; i++) {
        cin >> testChar;

        if (testString.find(testChar) != string::npos) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}