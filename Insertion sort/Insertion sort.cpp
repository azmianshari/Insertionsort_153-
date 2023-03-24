#include <iostream>
using namespace std;

int arr[20];			// Membuat Array dengan panjang data 20
int n;					// Membuat Variable inputan n

void input() {
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;
}
