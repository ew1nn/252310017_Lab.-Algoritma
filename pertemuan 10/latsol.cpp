#include <iostream>
using namespace std;

int faktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil; 
}

int main() {
    int angka;

    cout << "angka?: ";
    cin >> angka;

    int hasil = faktorial(angka);

    cout << "faktorial dari " << angka << " adalah: " << hasil;
}
