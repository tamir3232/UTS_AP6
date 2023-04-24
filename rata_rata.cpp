#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    string angka;
    int jumlah;
    double total = 0, rata;

    cout << "1. Mencari Rata-rata. (jumlah angka ditentukan)" << endl << endl;
    cout << "Masukkan jumlah angka: ";
    cin >> jumlah;
    cout << endl;

    for (int i = 1; i <= jumlah; i++) {
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angka;
        total += stoi(angka);
    }

    cout << endl;
    cout << "Total: " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata: " << rata << endl;
    getch();
}