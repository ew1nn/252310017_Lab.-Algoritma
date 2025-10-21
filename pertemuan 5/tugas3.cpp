#include <iostream>
using namespace std;

int main(){
	
	int a, b, x = 1;
	string c;
	
	do{
		cout << "Masukkan angka: ";
		cin >> a;
		b = a;
		
		for(a; a >= 1; a--){
			x = x * a;
		}
		
		cout << b << "! = " << x;
		cout << "\nMau mencoba lagi? (Y/N): ";
		cin >> c;
		x = 1;
	}while(c == "Y" || c == "y");
}
