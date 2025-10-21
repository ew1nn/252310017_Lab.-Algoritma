#include <iostream>
using namespace std;

int main(){

	int a, i, j, k, m;
	
	cout << "Masukkan jumlah baris: ";
	cin >> a;
	cout << endl;
	
	for(i = 1; i <= a; i++){
		for(j = i; j <= a; j++){
			cout << " *";
		}
		int wilip = (i - 1) * 4;
    	for(int s = 1; s <= wilip; s++){
        cout << " ";
    	}
		for(k = a; k >= i; k--){
			cout << " *";
		}
		cout << endl;
	}
	for(i = 1; i <= a; i++){
		for(j = 1; j <= i; j++){
			cout << " *";
		}
		for(j = 1; j <= (a - i); j++){
			cout << "    ";
		}
		for(k = 1; k <= i; k++){
			cout << " *";
		}
		cout << endl;
	}
	getchar();
}
