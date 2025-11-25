#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char kalimat1[50] = "Teknik";
    char kalimat2[50] = "Informatika";
    char hasil[100];

    // Salin kalimat1 ke hasil dulu
    strcpy(hasil, kalimat1);

    // Gabungkan kalimat2 ke hasil
    strcat(hasil, kalimat2);

    cout << "Kalimat1 = " << kalimat1 << endl;
    cout << "Kalimat2 = " << kalimat2 << endl;
    cout << "Menjadi  = " << hasil << endl;

    return 0;
}
