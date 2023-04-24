#include <iostream>
using namespace std;

int main() {
    int n;
    char abjad = 'A';
    cout << "Masukkan jumlah baris: ";
    cin >> n;
    
    n = n+1;
    for (int i = 1; i <= n; i++) {
    	if(i == 1){
	    	n = n-1;
		    for (int j = 1; j < n; j++) {
		    	cout << abjad++;
			}
			for (int j = n; j >= 1; j--) {
		    	cout << abjad--;
			}
			cout << endl;
			n = n+1;
		}
		
		else{
    	abjad = 'A';
        for (int j = 1; j <= n-i; j++) {
            cout << abjad++;
        }
        for (int j = 2; j <= 2*i-2; j++) {
            cout << " ";
        }
			for (int j = 1; j <= n-i; j++) {
            	cout << --abjad;
        	}
        cout << endl;
    	}
	}
return 0;
}