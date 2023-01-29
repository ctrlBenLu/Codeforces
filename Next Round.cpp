#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, a, i, fooBar, winner = 0;
    vector<int> scores = {};

    cin >> n >> k;

    for (i = 0; i < n; i++) {
        cin >> fooBar;
        scores.push_back(fooBar);
    }

    for (i = 0; i < n; i++) {
        if (scores[i] == 0) {
            break;
        }
        if (scores[i] >= scores[k - 1]) {
            winner++;
        }
        else break;
    }

    cout << winner;
}