#include <iostream>
#include <string>
using namespace std;

int main() {
	int x = 0, n = 0;
	string fooBar = "";

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> fooBar;
		if (fooBar.find("++") != string::npos) {
			x++;
		}
		else {
			x--;
		}
	}

	cout << x;
}