#include <iostream>
#include <sstream>//memanggil library
using namespace std;

int main(){
    int n;
    string a;

    cout<<"Masukkan Angka: ";
    cin>>n;

    stringstream temp;//wadah untuk mengubah int ke string
    temp << n;
    temp >> a;//int n diubah menjadi string a

    cout<<"Ini integer: "<<n<<endl;
    cout<<"Ini string: "<<a<<endl;
    cout<<endl;

    //Uji menggunakan Operator Penjumlahan
    cout<<"Int + Int :"<<n + n<<endl;
    cout<<"String + String: "<<a + a<<endl;

}