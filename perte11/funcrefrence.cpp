#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void tambah(int *c, int *d);

int main() {
    int a, b;
    a = 4;
    b = 6;

    cout << "Nilai sebelum pemanggilan fungsi";
    cout << "\na = " << a << "  b = " << b << endl;

    tambah(&a, &b);  

    cout << "\nNilai setelah pemanggilan fungsi";
    cout << "\na = " << a << "  b = " << b << endl;

    getch();
}


void tambah (int *c, int *d)
{
    *c += 7;   
    *d += 5;  
    
    cout << endl;
    cout << "\nNilai di akhir Fungsi Tambah()";
    cout << "\nc = " << *c << "  d = " << *d << endl;
}
