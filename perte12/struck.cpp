#include <iostream>
#include <string>
using namespace std;

struct dosen {
    string nama;
    string umur;
};

struct matkul {
    string nama_matkul;
    double ipk;
    string status;
    dosen dosen1, asdos;
};

int main() {
    dosen dosen1, asdos;
    matkul matkul1;

    dosen1.nama = "Jemy";
    dosen1.umur = "36";

    asdos.nama = "Helena";
    asdos.umur = "19";

    matkul1.nama_matkul = "Algo dan struktur";
    matkul1.ipk = 3.5;
    matkul1.status = "Wajib";
    matkul1.dosen1 = dosen1;
//    matkul1.asdos = asdos;

    cout << "Nama Matkul : " << matkul1.nama_matkul << endl;
    cout << "KKM Matkul         : " << matkul1.ipk << endl;
    cout << "Status matkul      : " << matkul1.status << endl;
    cout << "Nama Dosen : " << matkul1.dosen1.nama << endl;
    cout << "Umur Dosen : " << matkul1.dosen1.umur << endl;
    cout << "Nama Asdos : " << matkul1.asdos.nama << endl;
    cout << "Umur Asdos : " << matkul1.asdos.umur << endl;
}
