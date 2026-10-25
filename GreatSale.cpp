#include <iostream>
#include <string>
using namespace std;

int main() {
    int jenis,jumlah;
    double diskon =0, biaya=0, potongan_harga=0 ,total_biaya_diskon=0, total_biaya=0;
    string note,nm_barang;

    cout << "Toko Baba Slamet " << endl;
    cout << "1. A4 80 gram merk PAPER" << endl;
    cout << "2. tinta warna printer EPSON merk INKQ" << endl;
    cout << "3.  flashdisk SUNDRIVE 64 64GB " << endl;
    cout << "Masukan pilihan anda : " ;
    cin>>jenis;
    cout << "Masukan jumlah barang yang di beli : ";
    cin>>jumlah;

   
    if (jenis == 1) {
        biaya = 55000;
        nm_barang = "A4 MERK PAPER";
        if (jumlah >=3 && jumlah <= 5) { 
            diskon = 0.05;
        }else if (jumlah >= 6 && jumlah <= 10) {
            diskon = 0.1;
        }else if (jumlah >= 11 && jumlah <=15 ) {
            diskon = 0.15;
        }else if(jumlah > 15 ) {
            diskon = 0.2;
            note = "Kamu Mendapatkan FREE BOBA MILK TEA  ";
        }else {
            note = "Kamu Tidak Mendapatkan Bonus";
            diskon = 0;
        }

    }else if (jenis == 2) {
        biaya = 125000;
        nm_barang = "TINTA WARNA PRINTER EPSON MERK INKQ";
        if (jumlah >= 3 && jumlah <=10 ) {
            diskon =  0.1;
            note = "FREE 1 TINTA warna hitam ";
        }else {
            diskon = 0.2;
            potongan_harga = 2000;
            note = "Kamu Mendapatkan FREE 1 PACK";
        }
    }

    if (jenis == 3 ) {
        biaya =  180000;
        if (total_biaya_diskon > 18000000 && total_biaya <=50000000 ) {
            potongan_harga = 250000;
        }else if (total_biaya_diskon > 50000000 ) {
            potongan_harga = 750000;
        }
    }
        

    total_biaya_diskon = biaya * jumlah * (1 - diskon);

    total_biaya = total_biaya_diskon - potongan_harga;
 
    cout << "Pilihan Barang Anda : " << nm_barang << endl;
    cout << "Diskon Yang Anda Dapatkan : " << diskon << endl;   
    cout << "Bonus Yang Di Dapatkan : " << note << endl;
    cout << "Total Yang Harus Di Bayar : " << total_biaya << endl;
    cout << "" << endl;
     




}