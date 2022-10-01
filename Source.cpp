#include <iostream>
using namespace std;
int main() {
	int price = 0, coin = 0,counter =0 ,result=0;
	cin >> price >> coin;
	while (true) {
		counter++;
		result = price * counter;
		if (result % 10 == 0 || result % 10 == coin) break;
	}
	cout << counter;
	return 0;
}

/*   An oher way
int main() {
    
	int price = 0, coin = 0; int ten = 10,counter =1;
	cin >> price >> coin;
	int PRICE = price;
	while (true) {
		if (ten + coin == price || ten == price || coin ==price) {
			break;
		}
		else if (ten + coin > price) {
			price += PRICE;
			counter++;
		} else
			ten +=10;
	}
	cout << counter << endl;
	return 0;
}
*/
