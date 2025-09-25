#include <iostream>
using namespace std;

int main()
{
	string a;
	int b;
	long long c;
	char d[2];
	bool pilihan;
	cout << "Masukkan nama: ";
	getline(cin,a);
	cout << "Masukkan Umur : ";
	cin >> b;
	cout << "Masukkan NPM : ";
	cin >> c;
	cout << "Masukkan jenis kelamin (L/P): ";
	cin >> d;
	cout << "Masukkan mahasiswa aktif? (1 = Ya, 0 = Tidak) : ";
	cin >> pilihan;
	
	cout << "\n=== Data Mahasiswa ===" << endl;
	cout << "Nama : " << a << endl;
	cout << "Umur : " << b << endl;
	cout << "NPM : " << c << endl;
	cout << "Jenis Kelamin : " << d << endl;
	if (pilihan == 1){
		cout << "Status Aktif : Ya" << endl;
	} else if(pilihan == 0) {
		cout << "Status Aktif : Tidak" << endl;
	}
		else{
			cout << "Tidak ada jawaban" << endl;
		} 
		return 0;
}
		
