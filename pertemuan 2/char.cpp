#include <iostream>
using namespace std;

int main(){
	string y, z;
	char x[40];
	
	cout << "Masukkan NPM Anda: ";
	cin >> x;
	cin.ignore(); //biar getline nggak keganggu
	cout << "Masukkan Nama Anda: ";
	getline(cin, y);
	cout << "Masukkan Alamat Anda: ";
	getline (cin, z);
	
	cout << "NPM Anda adalah: " << x;
	cout << "\nNama Anda Adalah: " << y;
	cout << "\nAlamat Anda Adalah: " << z;
	
	return 0;
}
