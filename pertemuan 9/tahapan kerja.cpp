#include <iostream> //Necessary header file = standard input and output stream library
using namespace std; //memungkinkan tanpa harus mengawalinya dengan ?std::?. 

int main () //menyatakan awal dari program inti C++ yang akan di output
{
	int hasil[3][3]; //bentuk umum array -- 3 = baris dan 3 = kolom
	
	//looping untuk menginput nilai hasil penjualan 
	for(int a = 0; a < 3; a++){ //untuk variable a mulai dari 0 akan increment sampai < 3 atau sampai 2 untuk indeks a
	  for(int b = 0; b < 3; b++){ // untuk variable a mulai dari 0 akan increment sampai < 3 atau sampai 2 untuk indeks b
	  	cout<<"Data "<<a<<" - "<<b<<" ="; // output Data dengan meengeluarkan nilai a dan b saat itu
	  	cout<<"\nJumlah Penjumlahan = "; //endl dan output "jumlah penjumlahan"
	  	cin>>hasil[a][b]; // menginput nilai array untuk pertama dari indeks [0][0] sampai [2][2]
    }
}

	cout<<"\nHASIL PENJUALAN BARANG"; //endl dan output "Hasil Penjualan Barang"
	cout<<"\n======================"; //endl dan output tanda sama dengan sebagai pembatas
	cout<<"\n2001 | 2002  | 2003  |"; // endl dan output tahun yang sudah ditentukan dan dibatasi dengan |
	cout<<"\n======================"; //endl dan output tanda sama dengan sebagai pembatas
	cout<<endl; //cout endl, pindah ke barisan baru 
	
	//Looping untuk mengeluarkan nilai indeks array 
		for(int a = 0; a < 3; a++){//baris pada array akan mulai dari 0 sampai 2 menghasilkan 3 baris 
		for(int b = 0; b < 3; b++){ //kolom pada array akan mulai dari 0 sampai 2 menghasilkan 3 baris 
			cout<< " "<< hasil[a][b]<<"   |\t"; // akan mengeluarkan / output nilai sesuai mengikuti increment pada loop sesuai dari baris dan kolom
		}
		cout<<endl; //output nilai jika inner loop sudah selesai 
		
	}	
	
	return 0;	
}
