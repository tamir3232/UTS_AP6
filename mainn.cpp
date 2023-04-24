#include<Iostream>
#include<Conio.h>
using namespace std;

int main() {
    system("CLS");
    float rata;
    int jumlah,angka,total=0;
    
    cout<< "1. Mencari Rata-rata. (jumlah angka ditentukan)" << endl;
    cout<< endl;
    cout << "masukkan jumlah angka     : "; cin >> jumlah;
    cout << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan angka            : "; cin >> angka;
        total = total + angka;
    } 
    cout << endl;
    cout << "Total                     : " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata                 : " << rata;
    getch();
}
