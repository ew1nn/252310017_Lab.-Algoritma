//...program menghitung harga total
#include <iostream>
#define harga 4500.02 //...menentukan harga dengan define
using namespace std;

int main() {
	float jumlah, total;
	
	cout << "Masukkan Jumlah Barang = ";
	cin >> jumlah;
	total = harga * jumlah;
	cout << "\nYang Harus Dibayar = " << total;
	
}
