#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char huruf[20];
    char pindah[20];
    //clrscr();
    
    cout<<"Masukkan Sembarang Kata = ";
    cin >> huruf;
    
    cout<<"Panjang Kata Yang Diinputkan = ";
    cout<<strlen(huruf);
    
 getchar();
}
   
   
   //menggunakan for
   //kata jadi terbalik (reversed)
/*
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char kalimat[100];
    
	cout << "Masukkan Kalimat: ";
    cin.getline(kalimat, sizeof(kalimat));

    int x = strlen(kalimat);
    cout << "Kalimat Terbalik: ";
    
    for (int i = x - 1; i >= 0; i--) {
        cout << kalimat[i];
    }

    cout << endl;
    return 0;
}
*/
