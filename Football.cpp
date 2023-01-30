#include <iostream>
#include <vector>
using namespace std;

int main() {
	string teamPosition = "";

	cin >> teamPosition;
	
	if (teamPosition.find("0000000") != string::npos) {
		cout << "YES";
	}
	else if (teamPosition.find("1111111") != string::npos) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}