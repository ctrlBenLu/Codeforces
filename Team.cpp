#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n = 0, problemImplementCount = 0, first = 0, second = 0, third = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> first >> second >> third;
		if (first + second + third > 1) {
			problemImplementCount++;
		}
	}
	cout << problemImplementCount;
}