#include <iostream>
#include <string>
using namespace std;

int main() {

    int kendaraan , durasi , biaya , bayar;
    string nm_kendaraan , kategori;

    cout << "Selamat Datang Di Pembayaran Biaya Parkir " << endl;
    cout << "1. Sepeda (motor,listrik,tossa)" << endl;
    cout << "2. Mobil " << endl;
    cout << "3. Truck/Bus" << endl;

    cout << "Masukan Jenis Kendaraan Anda :";
    cin>>kendaraan;
    cout << "Masukan Durasi Parkir Anda : " ;
    cin>> durasi;

    if (kendaraan == 1 ) {
        nm_kendaraan = "Sepeda Motor";
        if (durasi > 12 ) {
            kategori = "Mengginap";
            biaya = 50000;
        }else {
            kategori = "Tidak Mengginap" ;
            biaya = durasi * 3000;
        }

    }else if (kendaraan == 2 ) {
        nm_kendaraan = "Mobil";
        if (durasi > 12) {
            kategori = "Mengginap";
            biaya = 75000;
        }else {
            kategori = "Tidak Mengginap" ;
            biaya = durasi * 5000;
        }

    }else if (kendaraan == 3) {
        nm_kendaraan = "Truck / Bus";
        if (durasi > 12) {
            kategori = "Tidak Mengginap";
            biaya = 250000;
        }else {
            kategori = "Tidak Mengginap";
            biaya = durasi * 25000;
        }
    }else {
        cout << "Jenis Yang Anda Pilih Tidak Ada" << endl;
    }

    cout << "Jenis Kendaraan Anda : " << nm_kendaraan << endl;
    cout << "Durasi Parkir Anda : " << durasi << endl;
    cout << "Biaya Parkir Anda : " << biaya << endl;
    cout << "Kendaraan Termasuk Kategori : "<< kategori << endl;
    
    cout << "Masukan Biaya Parkir Anda : ";
    cin>>bayar;

    while(true) {
        if (bayar > biaya) {
            cout << "Uang Anda Lebih Ini Kembalian Anda : " << bayar - biaya << endl;
            break;
        }else if (bayar < biaya) {
            cout << "Uang Anda Kurang Silahkan Masukan Biaya Yang Sudah Di Tentukan : ";
            cin>>bayar;
        }else {
            cout << "Terimakasih Sudah Menggunakan Sistem Parkir Kami" << endl;
            cout << "Sampai Jumpa Kembali " << endl;
            break;
        }
    }
}