#include <iostream>
#include <string>
using namespace std;

int main() {
    int kendaraan , durasi , biaya , bayar;
    string nm_kendaraan, kategori ;

    cout << "Selamat Datang Di Pembayaran Biaya Parkir" << endl;
    cout << "1. sepeda (motor,listrik,tossa) " << endl;
    cout << "2. mobil " << endl;
    cout << "3. truck " << endl;
    cout << "Masukan jenis kendaraan anda : ";
    cin>>kendaraan;
    cout << "Masukan durasi parkir anda : ";
    cin>>durasi;

    if (kendaraan == 1 ) {
        nm_kendaraan = "Sepeda(motor/dll)";

        if (durasi > 12) {
            kategori = "Menginap";
            biaya = 50000;
        }else {
            biaya = durasi * 3000;
            kategori = "Tidak Mengginap";
        }
    }else if (kendaraan == 2 ) {
        nm_kendaraan = "mobil";

        if (durasi > 12) {
            kategori = "Menginap";
            biaya = 75000;
        }else {
            biaya = durasi * 5000;
            kategori = "Tidak Mengginap";
        }
    }else if (kendaraan == 3) {
        nm_kendaraan = "truck";

        if (durasi > 12 ) {
            kategori = "Menginap";
            biaya = 250000;
        }else {
            biaya = durasi * 25000;
            kategori = "Tidak Mengginap";
        }
    }

    cout << "Jenis Kendaraan Anda : "  << nm_kendaraan << endl;
    cout << "Durasi Parkir Anda : " << durasi << endl;
    cout << "Biaya Parkir Anda : " << biaya << endl;
    cout << "Kendaraan terhitung : " << kategori << endl;
    cout << "Masukan Bayar Parkir : ";
    cin>>bayar;

    while (true) {
        if (bayar > biaya) {
            cout << "ini kembalian anda : " << (bayar - biaya) << endl;
            break; 

        }else if (bayar < biaya) {
            cout << "Mohon Maaf uang anda kurang " << endl;
            cout <<"Masukan uang anda kembali :";
            cin>>bayar;

        }else {
            cout << "uang anda pas " << endl;
            cout << "Terimakasih Telah memakirkan kendaraan anda disini";
            break;

        }
    }

















}



















