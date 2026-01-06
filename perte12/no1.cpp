#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    int tahun;
};

int main() {
    Buku buku[3];
    
    buku[0].judul = "Matematika Dasar";
    buku[0].penulis = "Slamet Riyadi";
    buku[0].tahun = 2018;

    buku[1].judul = "Pemrograman C++";
    buku[1].penulis = "Andi Wijaya";
    buku[1].tahun = 2020;

    buku[2].judul = "Bahasa Indonesia";
    buku[2].penulis = "Siti Aminah";
    buku[2].tahun = 2017;

    string cari;
    int ketemu = 0;

    cout << "Masukkan judul buku: ";
    getline(cin, cari);

    for (int i = 0; i < 3; i++) {
        if (buku[i].judul == cari) {
            cout << "\nData Buku Ditemukan\n";
            cout << "Judul   : " << buku[i].judul << endl;
            cout << "Penulis : " << buku[i].penulis << endl;
            cout << "Tahun   : " << buku[i].tahun << endl;
            ketemu = 1;
        }
    }

    if (ketemu == 0) {
        cout << "\nBuku tidak ditemukan" << endl;
    }
}
