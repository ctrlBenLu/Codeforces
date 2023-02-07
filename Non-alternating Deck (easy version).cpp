#include <iostream>
using namespace std;

int main() {
	int t = 0, n = 0, alice = 0, bob = 0, turn = 0, card = 1;
	cin >> t;
	while (t--) {
		cin >> n;
		alice += card;
		n -= card;
		card++;
		while (n > 0) {
			if (turn == 0 && card < n) {
				bob += card;
				n -= card;
				card++;
				turn++;
			}
			else {
				bob += n;
				break;
			}
			if (turn == 1 && card < n) {
				bob += card;
				n -= card;
				card++;
				turn++;
			}
			else {
				bob += n;
				break;
			}
			if (turn == 2 && card < n) {
				alice += card;
				n -= card;
				card++;
				turn++;
			}
			else {
				alice += n;
				break;
			}
			if (turn == 3 && card < n) {
				alice += card;
				n -= card;
				card++;
				turn = 0;
			}
			else {
				alice += n;
				break;
			}
			
		}
		cout << alice << " " << bob << "\n";
		alice = 0, bob = 0, turn = 0, card = 1;
	}
}