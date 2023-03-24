#include <iostream>
using namespace std;

int arr[20];			// Membuat Array dengan panjang data 20
int n;					// Membuat Variable inputan n

void input() {
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : ";	 // Membuat inputan jumlah element Array
		cin >> n;										// Memanggil variabel inputan n

		if (n <= 20) {									// Membuat Kondisi n tidak Lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;
	cout << "=====================" << endl;			// Membuat jarak per baris program
	cout << "Masukan Element Array" << endl;			// Membuat susunan data element Array
	cout << "=====================" << endl;
}
