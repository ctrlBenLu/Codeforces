#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCount; cin >> testCount;
    int strLength, x, y;
    string movements, candyStatus;

    for (int i = 0; i < testCount; i++) {
        cin >> strLength >> movements;
        x = 0;
        y = 0;
        candyStatus = "NO";
        for (int j = 0; j < strLength; j++) {
            // Runs for every letter
            if (movements[j] == 'U') {
                y++;
            }
            else if (movements[j] == 'D') {
                y--;
            }
            else if (movements[j] == 'L') {
                x--;
            }
            else if (movements[j] == 'R') {
                x++;
            }
            if (x == 1 && y == 1) {
                candyStatus = "YES";
                break;
            }
        }
        cout << candyStatus << "\n";
    }
}