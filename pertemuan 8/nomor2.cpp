#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() 
{
    char kalimat[200];
    char teks[200];
    char teks_baru[200];
    
    // ========== BAGIAN MEMBALIK KALIMAT ==========
    cout << "Masukkan Kalimat: ";
    cin.getline(kalimat, 200);   // <-- langsung angka, tanpa sizeof

    int x = strlen(kalimat);

    cout << "Kalimat Terbalik: ";
    for (int i = x - 1; i >= 0; i--) {
        cout << kalimat[i];
    }

    // ========== PEMBATAS ==========
    cout << "\n\n-----------------------------------------------------------------\n\n";

    // ========== BAGIAN MENGUBAH HURUF ==========
    cout << "Tuliskan kata dengan huruf kapital = ";

    cin.getline(teks, 200);   // <-- BACA SEMUA TERMASUK SPASI

    for (int i = 0; i < strlen(teks); i++) {
        teks_baru[i] = tolower(teks[i]);   // jadi huruf kecil semua
    }

    teks_baru[strlen(teks)] = '\0'; // wajib

    cout << "Hasil Perubahan = " << teks_baru << endl;

    return 0;
}
