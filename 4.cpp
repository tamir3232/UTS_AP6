#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    double rata,total = 0;
    int angka, jumlah;
    
    cout << "1. Mencari Rata-rata. (jumlah angka ditentukan) \n";
    cout << "masukkan jumlah angka \t: "; 
	cin >> jumlah;
    
    for (int i = 1; i <= jumlah; i++) {
        cout << "Masukkan angka ke- " << i << " : "; 
		cin >> angka;
        total = total + angka;
    } 
    cout << endl;
    
    cout << "Total\t\t: " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata \t: " << rata;
    getch();
}
