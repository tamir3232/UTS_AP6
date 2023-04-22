#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int jumlah; 
    float total, angka, rata;
    
    cout << "1. Mencari Rata-rata. (jumlah angka ditentukan)" << endl;
    cout << endl;
    cout << "Masukkan jumlah angka      : "; 
    cin >> jumlah;
    cout << endl;
   total = 0;
    for (int i = 1; i <= jumlah; i++) {
        cout << "Angka ke - " << i+1 << endl;
        cout << "Masukkan angka : "; 
        cin >> angka;
        total = total + angka;
    } 
    cout << endl;
    cout << "Total                      : " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata                 `: " << rata<<endl;

}