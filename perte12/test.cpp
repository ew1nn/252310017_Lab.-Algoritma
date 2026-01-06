#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    string kelas;
    int npm;
};

int main() {
    int n;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    cin.ignore();

    mahasiswa mhs[n]; 

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama  : ";
        getline(cin, mhs[i].nama);
        cout << "Kelas : ";
        getline(cin, mhs[i].kelas);
        cout << "NPM   : ";
        cin >> mhs[i].npm;
        cin.ignore();
    }

    cout << "\n=== Data Mahasiswa ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama  : " << mhs[i].nama << endl;
        cout << "Kelas : " << mhs[i].kelas << endl;
        cout << "NPM   : " << mhs[i].npm << endl;
    }

}
