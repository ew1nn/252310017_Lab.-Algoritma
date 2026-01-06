#include <iostream>
using namespace std;

struct Mahasiswa {
    float tugas;
    float praktek;
    float uts;
    float uas;
    float rata;
};

int main() {
    Mahasiswa m;
    char grade;

    cout << "Masukkan nilai tugas   : ";
    cin >> m.tugas;
    cout << "Masukkan nilai praktek : ";
    cin >> m.praktek;
    cout << "Masukkan nilai UTS     : ";
    cin >> m.uts;
    cout << "Masukkan nilai UAS     : ";
    cin >> m.uas;

    m.rata = (m.tugas + m.praktek + m.uts + m.uas) / 4;
    
    if (m.rata >= 90) {
        grade = 'A';
    } else if (m.rata >= 80) {
        grade = 'B';
    } else if (m.rata >= 70) {
        grade = 'C';
    } else if (m.rata >= 60) {
        grade = 'D';
    } else {
        grade = 'E';
    }
    cout << "\nNilai Rata-rata : " << m.rata << endl;
    cout << "Nilai Huruf     : " << grade << endl;
}
