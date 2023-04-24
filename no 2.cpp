#include <iostream>
#include <string>
using namespace std;
int main(){
    int pilih[100],jumlah[100],sub_total[100],harga[100];
	string nama,menu[100];
	int total_bayar;
	int i=0;
	float total_kembalian,uang;
	bool selesai=false;
    
    cout << "=================== Daftar Menu Makanan ===================" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "__________________________________________________________" << endl;
    cout << "| No |     Nama Makanan         |          Harga          |" << endl;
    cout << "__________________________________________________________" << endl;
    cout << "| 1  |      Nasi Goreng         |          10.000         |" << endl;
    cout << "| 2  |   Nasi Ayam Penyet       |          15.000         |" << endl;
    cout << "| 3  |    Nasi Ayam rica        |          10.000         |" << endl;
    cout << "| 4  |     Indomi Goreng        |          15.000         |" << endl;
    cout << "| 5  |     Kwetiaw Goreng       |          15.000         |" << endl;
    cout << "__________________________________________________________ " << endl;
    cout << "        Tekan 0 jika selesai melakukan pemesanan           " << endl;
    
    cout << "\nNama Pemesanan          :  "; cin >> nama;
    
    while(selesai==false){
        cout << "Pilih nomor menu yang ingin dipesan : ";
    	cin >> pilih[i];
    	
    	if (pilih[i]<=5){
    		if (pilih[i]==0){
    			selesai=true;
    			
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Nasi Goreng"; harga[i]=10000; break;
		    		case 2 : menu[i]="Nasi Ayam Penyet"; harga[i]=15000; break;
		    		case 3 : menu[i]="Nasi Ayam Rica"; harga[i]=10000; break;
		    		case 4 : menu[i]="Indomi Goreng"; harga[i]=15000; break;
		    		case 5 : menu[i]="Kweitaw Goreng"; harga[i]=15000; break;
		    		default : menu[i]="";harga[i]=0;
				}
				
	    cout << "Jumlah Porsi " << menu[i] << " : ";
		cin >> jumlah[i];
		cout << endl;
		    	
		sub_total[i]=jumlah[i]*harga[i];
		    	
	    total_bayar+=sub_total[i];
	    i++;
			}
	    } else {
			cout << "Menu yang dipilih tidak sesuai" << endl;
			cout << endl;
		}
    
	}
	
	cout << endl;
	cout << "==========================STRUK RESTAURAN=============================" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "No	Nama Menu    	  	Harga		Jumlah        Sub Total            " << endl;
	cout << "----------------------------------------------------------------------" << endl;
	for (int a=0;a<i;a++){ 
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a] << endl;
	}
	cout << "----------------------------------------------------------------------" << endl;
	cout << "\nTotal Bayar = Rp." << total_bayar << endl;
	
	cout << "Masukkan jumlah uang yang dibayar : "; 
	cin >> uang;
	
	total_kembalian = uang - total_bayar; 
    cout << "Kembalian                         : Rp " << total_kembalian << endl;
    cout << "----- TERIMA KASIH " << nama << " TELAH MAKAN DI RUMAH MAKAN TABINA-----" << endl;
}

