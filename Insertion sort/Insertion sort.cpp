#include <iostream>
using namespace std;

int arr[20];			// Membuat Array dengan panjang data 20
int n;					// Membuat Variable inputan n

void input() {			// Procedure Input
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

	for (int i = 0; i < n; i++)							// Menggunakan perulangan for untuk menyimpan data pada Array
	{
		cout << "Data ke-" << (i + 1) << ": ";			// Memasukan atau menginput nilai data n
		cin >> arr[i];									// Menyimpan nilai data n kedalam Array arr
	}
}

void insertionsort() {									// Procedure Insertionsort

	int temp;											// Membuat Variabel data temporer atayu menyimpan sementara
	int j;												// Membuat Variabel j sebagai penanda

	for (int i = 1; i < n; i++) {							// 1. Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];									// 2. Simpan nilai arr[1] ke Variabel sementara

		j = 1 - 1;										// 3. Setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp)					// 4. Looping while dimana j lebih besar sama dengan 0 dan arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];						// 4a. Simmpan arr[j] kedalam Variabel arr[j+1]
			j--;										// 4b. Decrement nilai j by 1
		}

		arr[j + 1] = temp;								// Simpan nilai temp ke dalam arr[j+1]


		cout << "\nPass " << i << ": ";					// Output ke layar
		for (int k = 0; k < n; k++) {					// Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";						// Output ke layar
		}
	}	
	
}
