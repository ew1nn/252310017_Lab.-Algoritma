#include <iostream>
using namespace std;

int main(){
	
	int a, b, c=0;
	
	cout << "Masukkan angka: ";
	cin >> a;
	
	for(b = 1; b <= a; b++){
		if(a % b == 0){
			c++;
		}
	}
	if(c <= 2 && c != 1){
		cout << a << " termasuk bilangan prima";
	}else{
		cout << a << " bukan termasuk bilangan prima";
	}
}
