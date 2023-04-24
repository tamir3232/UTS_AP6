#include <iostream>
using namespace std;
int main(){
    
  int angka1, angka2, jumlah;

  cout << "Masukkan angka pertama : "; cin >> angka1;
  cout << "Masukkan angka kedua   : "; cin >> angka2;

  jumlah = angka1+angka2;

  string str_angka1 = to_string(angka1);
  string str_angka2 = to_string(angka2);

  string combined_str = str_angka1 + str_angka2;
  cout << "Jumlah kedua angka (dalam integer) : " << jumlah << endl;
  cout << "Nilai  kedua angka (dalam string)  : " << combined_str << endl;
  
  return 0;
}