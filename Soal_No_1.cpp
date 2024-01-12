#include <iostream>
using namespace std;

int main()
{
	int pola;

	cout << "Masukan panjang pola yang kalian mau : ";
	cin >> pola ;

	for (int i = 0; i <= pola ; i++) {
		for (int j = pola ; j > i; j--) {
			cout << "*";
		}
		for (int k = 0; k <= (2 * i - 1); k++) {
			cout << " ";
		}
		for (int j = pola; j > i; j--) {
			cout << "*";
		}

		cout << endl;
	}






	return 0;
}


