#include <iostream>
using namespace std;

void nuker(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;

    cout << "Masukkan nilai A: ";
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;

    nuker(&A, &B);

    cout << "Setelah ditukar:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
}
