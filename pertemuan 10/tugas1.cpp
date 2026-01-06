#include <iostream>
#include <string>
using namespace std;

int tes(string kalimat, char huruf) {
    int count = 0;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == huruf) {
            count++;
        }
    }
    return count;
}

int main() {
    string kalimat;
    char huruf;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan karakter yang ingin dihitung: ";
    cin >> huruf;

    int hasil = tes(kalimat, huruf);

    cout << "Jumlah karakter '" << huruf << "' dalam kalimat adalah: " << hasil << endl;

    return 0;
}
