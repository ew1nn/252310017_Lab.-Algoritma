#include <iostream>
#include <string>
using namespace std;

int main ()
{
    struct mahasiswa {
        char nim[15];     
        char nama[15];
        float nilai;
    };
    
    mahasiswa mahasiswa;       
    cout << "masukan nim :";
    cin >> mahasiswa.nim;      
    cout << "masukan nama :";
    cin >> mahasiswa.nama;
    cout << "masukan nilai akhir :";
    cin >> mahasiswa.nilai;
    cout << "\nData yang diinput adalah \n\n:";
    cout << "Nim :" << mahasiswa.nim << endl; 
    cout << "Nama :" << mahasiswa.nama << endl; 
    cout << "Nilai Akhir :" << mahasiswa.nilai << endl; 
}

struct siswa {
    int no_induk;
    string nama;
    float nilai; 
};

 int main ()
{
    siswa Arkan, lukas;
    Arkan.no_induk = 1;
    Arkan.nama = "Arkan Januar";
    Arkan.nilai = 75.5;

    lukas.no_induk = 2;
    lukas.nama = "Lukas Laksono";
    lukas.nilai = 89.9;   
    
    cout << Arkan.nama << " Dengan Nomor Induk "
         << Arkan.no_induk << " Mendapatkan nilai "
         << Arkan.nilai << endl;

    cout << lukas.nama << " Dengan Nomor Induk "
         << lukas.no_induk << " Mendapatkan nilai "
         << lukas.nilai << endl;
}

struct siswa{
    int no_induk;
    string nama;
    float nilai;
};

int main()
{
    siswa jery = {1, "jery januar", 85.5};
    siswa tomo = {2, "tomo lakasana", 89.9};

    cout << jery.nama << " Mendapatkan Nilai "
         << jery.nilai << endl;

    cout << tomo.nama << " mendapatkan nilai "
         << tomo.nilai << endl;
}

struct dataMahasiswa
{
    string name, npm, jurusan;
};

struct nilai 
{
    float nilai_1, nilai_2;
};

struct {
    dataMahasiswa Data;
    nilai Nilai;
} mahasiswa;

int main ()
{
    cout << "Masukann Nama Mahasiswa : ";
    getline(cin, mahasiswa.Data.name);
    
    cout << "Masukann NPM Mahasiswa : ";
    cin >> mahasiswa.Data.npm;
    
    cout << "Masukan Jurusan Mahasiswa : ";
    cin >> mahasiswa.Data.jurusan;
    
    cout << "Masukan Nilai 1: ";
    cin >> mahasiswa.Nilai.nilai_1;
    
    cout << mahasiswa.Data.name << " "
         << mahasiswa.Data.npm << " "
         << mahasiswa.Data.jurusan << " "
         << mahasiswa.Nilai.nilai_1 << endl;
}

struct calculator {
    int add (int num1, int num2) 
    {
        return num1 + num2;
    }
    
    int multiply (int num1, int num2)
    {
        return num1 * num2;
    }
};

int main ()
{
    calculator calculator;
    int num1, num2;
    
    cout << "enter first number: ";
    cin >> num1;
    
    cout << "enter second number: ";
    cin >> num2;
    
    cout << num1 << " + " << num2 << " = "
         << calculator.add(num1, num2) << endl;

    cout << num1 << " * " << num2 << " = "
         << calculator.multiply(num1, num2) << endl;
}
