#include <iostream>
using namespace std;

void tambah(int m, int n);

int main() {
    int a, b;
    a = 5;
    b = 9;

    cout << "Nilai sebelum fungsi digunakan:\n";
    cout << "A = " << a << "  B = " << b << endl;

    tambah(a, b);

    cout << "\nNilai setelah fungsi digunakan:\n";
    cout << "A = " << a << "  B = " << b << endl;
}

void tambah(int m, int n) {
    m = m + 5;
    n = n + 7;

    cout << "\nNilai di dalam fungsi:\n";
    cout << "m = " << m << "  n = " << n << endl;
}
