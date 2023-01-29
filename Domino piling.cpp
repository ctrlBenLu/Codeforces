#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n; /*(1 - 16)*/

    if (m * n < 2) {
        cout << 0;
        return 0;
    }

    if (m * n % 2 == 1) {
        cout << ((m * n) - 1) / 2;
    }
    else {
        cout << m * n / 2;
    }
}