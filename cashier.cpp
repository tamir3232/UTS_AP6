    #include <iostream>
using namespace std;

int main() {
    // inisialisasi variabel
    int jumlahProduk = 7;
    string daftarProduk[jumlahProduk] = {"Susu", "Roti", "Gula", "Garam", "Beras", "Teh", "Mie Goreng"};
    int hargaProduk[jumlahProduk] = {5000, 3000, 6000, 4000, 15000, 5000, 2500};
    int keranjangBelanja[jumlahProduk] = {0, 0, 0, 0, 0, 0, 0};
    int totalHarga = 0;
    int uang = 0;
    int kembalian = 0;

    // tampilkan daftar produk
    cout << "Daftar Produk:" << endl;
    for (int i = 0; i < jumlahProduk; i++) {
        cout << i + 1 << ". " << daftarProduk[i] << " - Rp " << hargaProduk[i] << endl;
    }

    // beli produk
    bool beliLagi = true;
    while (beliLagi) {
        int pilihanProduk, jumlahBeli;
        cout << "Pilih produk yang ingin dibeli: ";
        cin >> pilihanProduk;
        cout << "Masukkan jumlah yang ingin dibeli: ";
        cin >> jumlahBeli;

        // validasi input
        if (pilihanProduk <= 0 || pilihanProduk > jumlahProduk) {
            cout << "Input tidak valid!" << endl;
        } else if (jumlahBeli <= 0) {
            cout << "Input tidak valid!" << endl;
        } else {
            keranjangBelanja[pilihanProduk - 1] += jumlahBeli;
            totalHarga += hargaProduk[pilihanProduk - 1] * jumlahBeli;
            cout << "Produk berhasil ditambahkan ke keranjang belanja." << endl;

            // tampilkan keranjang belanja
            cout << "Keranjang belanja:" << endl;
            for (int i = 0; i < jumlahProduk; i++) {
                if (keranjangBelanja[i] > 0) {
                    cout << daftarProduk[i] << " - " << keranjangBelanja[i] << " - Rp " << hargaProduk[i] * keranjangBelanja[i] << endl;
                }
            }

            // tanyakan apakah ingin membeli lagi
            char jawaban;
            cout << "Apakah ingin membeli produk lagi? (Y/N) ";
            cin >> jawaban;
            if (jawaban == 'N' || jawaban == 'n') {
                beliLagi = false;
            }
        }
    }

    // bayar
    cout << "Total harga: Rp " << totalHarga << endl;
    bool bayarLagi = true;
    while (bayarLagi) {
        cout << "Masukkan uang pembayaran: Rp ";
        cin >> uang;
        if (uang < totalHarga) {
            cout << "Uang yang dimasukkan kurang!" << endl;
        } else {
            kembalian = uang - totalHarga;
            cout << "Kembalian: Rp " << kembalian << endl;
            bayarLagi = false;
        }
    }

    // tampilkan struk pembayaran
    cout << "==========================" << endl;
    cout << "       STRUK PEMBAYARAN    " << endl;
    cout << "==========================" << endl;
    cout << "Daftar belanja:" << endl;
 for (int i = 0; i < jumlahProduk; i++) {
        if (keranjangBelanja[i] > 0) {
        cout << daftarProduk[i] << " - " << keranjangBelanja[i] << " - Rp " << hargaProduk[i] * keranjangBelanja[i] << endl;
    }
 }
    cout << "Total harga: Rp " << totalHarga << endl;
    cout << "Uang pembayaran: Rp " << uang << endl;
    cout << "Kembalian: Rp " << kembalian << endl;
    cout << "Terima kasih sudah berbelanja." << endl;

    return 0;
    
}