#include <iostream>
using namespace std;

int main () {
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    
    cout << "Masukan jumlah baris (1-100): ";
    cin >> r;
    
    cout << "Masukan jumlah kolom (1-100): ";
    cin >> c;
    
    cout << endl << "Masukan matriks pertama:" << endl;
    
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << "Matriks A[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    
    cout << endl << "Masukan matriks kedua:" << endl;
    
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << "Matriks B[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }
    
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    	
    cout << endl << "Hasil Penjumlahan Matriks:" << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

}
