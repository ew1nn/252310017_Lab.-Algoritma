#include <iostream>
using namespace std;


void kalitiga(int *x) {
    *x = (*x) * (*x) * (*x); 
}

int main() {
    int a;

    cout << "Masukkan nilai: ";
    cin >> a;

    kalitiga(&a);

    cout << "Hasil pangkat tiga = " << a << endl;
}
