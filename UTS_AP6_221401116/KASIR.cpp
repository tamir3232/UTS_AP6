#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

int k, hr, jml, ttl, byr, kmb;
char ulangi;
do
{
    cout << "          NAWA       " << endl;
    cout << " Toko Kita" << endl;
    cout << "=============================" << endl;
    cout << endl;
    cout << "Barang------------------Harga" << endl;
    cout << "1. BERAS               Rp.60000" << endl;
    cout << "2. MINYAK              Rp.30000" << endl;
    cout << "3. GULA                Rp.25000" << endl;
    cout << "---------------------------------" << endl;
    cout << "Masukan Yang Dibeli :"; cin >> k;


    switch (k)
    {
    case 1:
        cout << "--BERAS--" << endl;
        hr = 60000;
        cout << "Jumlah Beli : "; cin >> jml;
        ttl = hr * jml;
        cout << "Total pembelian : " << ttl << endl;
        cout << "Pembayaran : "; cin >> byr;
        kmb = byr - ttl;
        cout << "Kembalian : Rp." << kmb << endl;
        cout << "--------------------" << endl;
        cout << "Beli Lagi ?(Y/T) :"; cin >> ulangi;
        break;

    case 2:
        cout << "--MINYAK--" << endl;
        hr = 30000;
        cout << "Jumlah Beli : "; cin >> jml;
        ttl = hr * jml;
        cout << "Total pembelian : " << ttl << endl;
        cout << "Pembayaran : "; cin >> byr;
        kmb = byr - ttl;
        cout << "Kembalian : Rp." << kmb << endl;
        cout << "--------------------" << endl;
        cout << "Beli Lagi ?(Y/T) :"; cin >> ulangi;
        break;

    case 3:
        cout << "--GULA--" << endl;
        hr = 25000;
        cout << "Jumlah Beli : "; cin >> jml;
        ttl = hr * jml;
        cout << "Total pembelian : " << ttl << endl;
        cout << "Pembayaran : "; cin >> byr;
        kmb = byr - ttl;
        cout << "Kembalian : Rp." << kmb << endl;
        cout << "--------------------" << endl;
        cout << "Beli Lagi ?(Y/T) :"; cin >> ulangi;
        break;

    default:
        cout << "Kode tidak cocok" << endl;

    }
    system("cls");

    cout << "Terimakasih telah berkunjung" << endl;

} while (ulangi == 'Y' || ulangi == 'y');

return 0;
}