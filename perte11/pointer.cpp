#include <iostream>
using namespace std;


// ==========================
// BAGIAN 1 (sesuai kode kamu)
// ==========================
// int main ()
// {
//     int ilham, amir, *raka;
//     ilham = 75;
//     amir = ilham;
//     raka = &ilham;
//     cout <<"Nilai Ilham= " << ilham << endl;
//     cout <<"Nilai Amir= " << amir << endl;
//     cout <<"Nilai Raka= " << *raka << endl;
// }



// ==========================
// BAGIAN 2 (diperbaiki)
// ==========================
// int main ()
// {
//     int yofrie = 93;
//     int *hadiansyah;

//     cout << "nilai awal yofrie = " << yofrie << endl;
//     hadiansyah = &yofrie;

//     cout << "nilai hadiansyah sekarang = " << *hadiansyah << endl;

//     *hadiansyah = 50;

//     cout << "nilai hadiansyah sekarang = " << *hadiansyah << endl;
// }



int main ()
{
    int ilham;
    int *raka;
    int **amir;
    int ***bob;  
    
    ilham = 75;
    cout << "nilai ilham= " << ilham << endl;

    raka = &ilham;     
    amir = &raka;      
    bob  = &amir;    

    cout << "Nilai raka hasil mengakses ilham = " << *raka << endl;
    cout << "Nilai amir hasil mengakses raka = " << **amir << endl;

    cout << "Nilai bob hasil mengakses amir = " << ***bob << endl;
}
