#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char huruf[100];
    
    cout<<"Masukkan Kata = ";
    cin.getline(huruf, 100);
    
    cout<<"Panjang Kata Yang Diinputkan = ";
    cout<<strlen(huruf);
    
 getchar();
}
