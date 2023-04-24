#include <iostream>
using namespace std;

int main() {
    int n;
    char abjad = 'A';
    cout << "Masukkan jumlah baris: ";
    cin >> n;
    
    for (int i = 1; i < n; i++) { //Looping untuk urutan awal
    	cout << abjad++;
	}
	for (int i = n; i >= 1; i--) {
    	cout << abjad--;
	}
	cout << endl;
	
    for (int i = 1; i <= n; i++) { //looping baris
    	abjad = 'A';
        for (int j = 1; j <= n-i; j++) { //looping urutan awal sampai batas abjad
            cout << abjad++;
        }
        for (int j = 1; j <= 2*i-1; j++) { //looping untuk segitiga
            cout << " ";
        }
			for (int k = 1; k <= n-i; k++) { //looping abjad akhir sampai A
            	cout << --abjad;
        	}
    cout << endl;
    }
return 0;
}


