#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat, hasil = "";
    int i;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    i = kalimat.length();

    while (i > 0) {
        hasil = hasil + kalimat[i - 1];
        i = i - 1;
    }

    cout << "Hasil: " << hasil << endl;
}
