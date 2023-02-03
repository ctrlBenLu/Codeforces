#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string stringOne, stringTwo; cin >> stringOne >> stringTwo;

	transform(stringOne.begin(), stringOne.end(), stringOne.begin(), ::tolower);
	transform(stringTwo.begin(), stringTwo.end(), stringTwo.begin(), ::tolower);

	int answer;
	answer = stringOne.compare(stringTwo);

	cout << answer;
}