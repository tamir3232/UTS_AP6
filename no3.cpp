#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int n;
    char ch = 'A';
    
    cout << "Masukkan angka urutan Alphabet : ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        if (i == n) {  //akan berjalan jika kondisi i = n
            for (int j = 2; j <= i; j++) {
                cout << ch++;
            }
            for (int j = 1; j <= i; j++) {
                cout << ch--;
            } 
            ch--;
        } else {  //selain kondisi i = n
            for (int j = 1; j <= i; j++) {
                cout << ch++;
            }
            ch--;
            for (int j = 1; j <= (n - i) * 2 - 1 ; j++) {
                cout << " ";
            }
            for (int j = 1; j <= i; j++) {
                cout << ch--;
            }
        }
        ch = 'A';
        cout << endl;
    }
}