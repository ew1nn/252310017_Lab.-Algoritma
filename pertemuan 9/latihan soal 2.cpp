#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n; 
    char kode[10];
    int beli[10], harga[10];
    string jenis[10];
    int jumlah[10];
    int total = 0;

    cout << "GEROBAK FRIED CHICKEN\n";
    cout << "-------------------------------------------------\n";

    cout << left << setw(8) << "Kode"
         << setw(12) << "Jenis"
         << setw(12) << "Harga" << endl;

    cout << left << setw(8) << "D" << setw(12) << "Dada"  << "Rp 2500" << endl;
    cout << left << setw(8) << "P" << setw(12) << "Paha"  << "Rp 2000" << endl;
    cout << left << setw(8) << "S" << setw(12) << "Sayap" << "Rp 1500" << endl;

    cout << "-------------------------------------------------\n\n";

    cout << "banyak jenis: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nJenis ke-" << i + 1 << endl;
        cout << "Jenis Potong (D/P/S): ";
        cin >> kode[i];
        cout << "Banyak Potong : ";
        cin >> beli[i];

        switch (toupper(kode[i])) {
            case 'D':
                jenis[i] = "Dada";  harga[i] = 2500; break;
            case 'P':
                jenis[i] = "Paha";  harga[i] = 2000; break;
            case 'S':
                jenis[i] = "Sayap"; harga[i] = 1500; break;
            default:
                cout << "Kode tidak dikenal!\n";
                return 0;
        }

        jumlah[i] = harga[i] * beli[i];
        total += jumlah[i];
    }

    float pajak = total * 0.10;
    float totalBayar = total + pajak;

    cout << "\n---------------------------------------------------------------\n";
    cout << left
         << setw(5)  << "No"
         << setw(15) << "Jenis Potong"
         << setw(15) << "Harga Satuan"
         << setw(15) << "Banyak Beli"
         << setw(15) << "Jumlah Harga" << endl;

    for (int i = 0; i < n; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(15) << jenis[i]
             << "Rp " << setw(12) << harga[i]
             << setw(15) << beli[i]
             << "Rp " << jumlah[i]
             << endl;
    }

    cout << "---------------------------------------------------------------\n";

    cout << right << setw(50) << "Jumlah Bayar : Rp " << total << endl;
    cout << right << setw(50) << "Pajak 10%    : Rp " << pajak << endl;
    cout << right << setw(50) << "Total Bayar  : Rp " << totalBayar << endl;

}
