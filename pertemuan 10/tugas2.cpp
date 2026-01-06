#include <iostream>
using namespace std;

float konversiSuhu(char tujuan, float suhu) {
    float hasil;

    if (tujuan == 'C') {
        hasil = (suhu - 32) * 5 / 9;
    } else if (tujuan == 'F') {
        hasil = (suhu * 9 / 5) + 32;
    } else if (tujuan == 'K') {
        hasil = suhu + 273;
    }

    return hasil;
}

int main() {
    char jenis;
    float suhu;
    char tujuan;

    cout << "Masukkan jenis suhu awal (C/F/K): ";
    cin >> jenis;

    cout << "Masukkan nilai suhu: ";
    cin >> suhu;

    cout << "Masukkan jenis suhu tujuan (C/F/K): ";
    cin >> tujuan;

    float hasil = konversiSuhu(tujuan, suhu);

    cout << "Hasil konversi: " << hasil << " derajat " << tujuan << endl;

}
