#include <iostream>
using namespace std;

int main(){
    system("CLS");
    int n,i,bnyk_item[50],hrg[50],harga_barang[50],total,nominal;
    string barang[50],donasi;

    cout<<"Masukaan banyak Barang yang anda beli: ";
    cin>>n;
    cout<<"Masukan Keterangan Barang anda:"<<endl;

    for(int i=1; i<=n; i++){
        cout<<"Barang ke - "<<i<<endl;

        cout<<"Nama Barang: ";
        cin>>barang[i];//barangnya 1 kata aja yaa bang, blum paham pake getlinenya ;<
        cout<<"Banyak Item: ";
        cin>>bnyk_item[i];
        cout<<"Masukkan Harga Barang per item: ";
        cin>>hrg[i];
        cout<<"\n";

        harga_barang[i]=bnyk_item[i]*hrg[i];
        total = total + harga_barang[i];
    }
    cout<<"Berikut Detail Belanjaan Anda: "<<endl;

    for(int i=1; i<=n; i++){
        cout<<barang[i]<<"\nTotal: "<<harga_barang[i]<<endl;
    }
    cout<<"Apakah anda Ingin berdonasi (y/t)?";
    cin>>donasi;
    if(donasi == "y"){
        cout<<"Masukkan Nominal yang ingin Anda donasikan: ";
        cin>>nominal;
        cout<<"\nTotal Belanjaan anda Adalah: "<< total + nominal<<endl;
        cout<<"\nTerima kasih telah berdonasi."<<endl;
        cout<<"Donasi ini akan kami berikan kepada anak-anak yatim yang membutuhkan. \nSemoga dapat menjadi berkah untuk Anda";
    }
    else{
        cout<<"Terima kasih atas jawaban Anda.";
        cout<<"\nTotal Belanjaan anda Adalah: "<<total;
    }
    cout<<"\n\nTerima Kasih Sudah Berbelanja, Sampai Jumpa Kembali ;>";
}