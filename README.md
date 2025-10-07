#include <iostream>
using namespace std;

int main () {
	int a = 5;
	
	 cout << "Nilai awal a = " << endl;
	 
	 // pre-increment : a ditambah dulu, jadi 6, lalu ditampilkan
	 cout << "Pre-increament -> ++a = " << ++a << endl;
	 
	 // a = 6
	 
	 // Post-increment : nilai lama a=6 ditampilkan dulu, lalu a jadi 7
	 cout << "Post-increment -> a++ = " << a++ << ", Sekarang a = " << a << endl;
	 
	 // a = 7
	 
	 // post-increment : a dikurangi dulu, jadi 6, lalu ditampilkan
	 cout << "Pre-decrement -> --a = " << a << endl;
	 
	 // a = 6
	 
	 // Post-decrement : nilai lama a=6 ditampilkan dulu, lalu jadi 5
	 cout << "Pre-decrement -> a-- = " << a << ", Sekarang a = " << a << endl;
}
