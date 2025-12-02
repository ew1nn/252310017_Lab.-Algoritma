#include <iostream>
using namespace std;

int main() {
    int baris1, kolom1, baris2, kolom2;
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int pilihan;

    do {
        cout << "1. Penjumlahan Matriks\n";
        cout << "2. Pengurangan Matriks\n";
        cout << "3. Perkalian Matriks\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu : ";
        cin >> pilihan;

        switch (pilihan) {
        case 1: 
            cout << "\n--- PENJUMLAHAN MATRIKS ---\n";
            cout << "Masukkan ukuran matriks (baris kolom): ";
            cin >> baris1 >> kolom1;

            baris2 = baris1;
            kolom2 = kolom1;

            cout << "\nInput elemen Matriks A:\n";
            for (int i = 0; i < baris1; i++)
                for (int j = 0; j < kolom1; j++)
                    cin >> matriks1[i][j];

            cout << "\nInput elemen Matriks B:\n";
            for (int i = 0; i < baris2; i++)
                for (int j = 0; j < kolom2; j++)
                    cin >> matriks2[i][j];

            cout << "\nHasil Penjumlahan:\n";
            for (int i = 0; i < baris1; i++) {
                for (int j = 0; j < kolom1; j++) {
                    hasil[i][j] = matriks1[i][j] + matriks2[i][j];
                    cout << hasil[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 2: // PENGURANGAN
            cout << "\n--- PENGURANGAN MATRIKS ---\n";
            cout << "Masukkan ukuran matriks (baris kolom): ";
            cin >> baris1 >> kolom1;

            baris2 = baris1;
            kolom2 = kolom1;

            cout << "\nInput elemen Matriks A:\n";
            for (int i = 0; i < baris1; i++)
                for (int j = 0; j < kolom1; j++)
                    cin >> matriks1[i][j];

            cout << "\nInput elemen Matriks B:\n";
            for (int i = 0; i < baris2; i++)
                for (int j = 0; j < kolom2; j++)
                    cin >> matriks2[i][j];

            cout << "\nHasil Pengurangan:\n";
            for (int i = 0; i < baris1; i++) {
                for (int j = 0; j < kolom1; j++) {
                    hasil[i][j] = matriks1[i][j] - matriks2[i][j];
                    cout << hasil[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 3:
            cout << "\n--- PERKALIAN MATRIKS ---\n";
            cout << "Masukkan ukuran Matriks A (baris kolom): ";
            cin >> baris1 >> kolom1;
            cout << "Masukkan ukuran Matriks B (baris kolom): ";
            cin >> baris2 >> kolom2;

            if (kolom1 != baris2) {
                cout << "Perkalian tidak dapat dilakukan! (kolom A != baris B)\n";
                break;
            }

            cout << "\nInput elemen Matriks A:\n";
            for (int i = 0; i < baris1; i++)
                for (int j = 0; j < kolom1; j++)
                    cin >> matriks1[i][j];

            cout << "\nInput elemen Matriks B:\n";
            for (int i = 0; i < baris2; i++)
                for (int j = 0; j < kolom2; j++)
                    cin >> matriks2[i][j];

            for (int i = 0; i < baris1; i++)
                for (int j = 0; j < kolom2; j++)
                    hasil[i][j] = 0;

            for (int i = 0; i < baris1; i++)
                for (int j = 0; j < kolom2; j++)
                    for (int k = 0; k < kolom1; k++)
                        hasil[i][j] += matriks1[i][k] * matriks2[i][k];

            cout << "\nHasil Perkalian Matriks:\n";
            for (int i = 0; i < baris1; i++) {
                for (int j = 0; j < kolom2; j++) {
                    cout << hasil[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 4:
            cout << "Keluar program...\n";
            break;

        default:
            cout << "Menu tidak tersedia!\n";
        }

    } while (pilihan != 4);

    return 0;
}
