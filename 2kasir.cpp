#include<iostream>
#include<string> //untuk string

using namespace std;

int main(){
	int n;
	string la;
	char sudah,belum;
	
	ulang:
	system("CLS");
	cout << "~~ SELAMAT DATANG DI SUPERMARKET FADHIL ~~\n";
	cout << "Berapa jumlah barang yang anda beli : "; cin >> n; //user menginput jumlah barang
	
	string brng[n]; //penggunaan array untuk menyimpan setiap barang jumlah dan harga
	int jmlh[n];
	long int harga[n],kali[n],total;
	total = 0;
	
	for (int i = 0;i<n;i++){ //user menginput barang beserta harga
		cout << i+1 <<". Masukkan nama barang : "; cin >> brng[i];
		cout << "Masukkan jumlah barang : "; cin >> jmlh[i]; 
		cout << "Masukkan harga " << brng[i] << " : Rp. "; cin >> harga[i]; 
		cout << "\n";
	}
	
	cout << "Apakah barang beserta harga sudah tepat? (sudah/belum) : "; cin >> la; //Penggunaan if untuk memulai program dari awal dikarenakan user salah menginput barang/harga`
	if (la == "belum") goto ulang;
	
	for (int i = 0;i<n;i++){ //jumlah * harga
		harga[i]=jmlh[i]*harga[i];
	}
	
	system("CLS");//tampilan lebih bersih
	cout << "Anda membeli \n";
	for (int i = 0;i<n;i++){ //output harga dan barang
		cout << i+1 <<". " << brng[i] << " " << jmlh[i] << "\t Harga Setelah dijumlah : Rp. " << harga[i];
		cout << "\n";
	}
	
	for (int i = 0;i<n;i++){
		total = total + harga[i];
	}	
	
	cout <<"\n";
	cout << "Total yang harus dibayar sebesar Rp. " << total;//output total harga
	
return 0;	
}
