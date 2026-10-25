#include <iostream>
using namespace std;

int main() {

    double Parkir, jam , biaya;
    int pilihan;

    cout<<""<<endl;
    cout << " Selamat Datang Di Sistem Parkir " << endl;
    cout << "==============================" << endl;
    cout << "" << endl;
    cout << "Pilih Jenis Kendaraan Anda :" << endl;
    cout << "1. Mobil" << endl;
    
    cout << "2. Motor" << endl;
    cout << "Masukan Jenis Kendaraan (1. Mobil / 2. Motor) : ";cin>>pilihan;
    cout << "Masukan Lama Parkir (jam) : ";cin>>jam;

    if (pilihan == 1 || pilihan == 2) {

        if (pilihan == 1) {

            if (jam <=2) {

                Parkir = 5000;
            }else if (jam > 2) {
                Parkir = 5000 + (jam - 2) * 2000;
            } else {
                Parkir = 0;
            }

        }else if (pilihan == 2) {

            if (jam <= 2) {
                Parkir = 3000;
            } else {
                Parkir = 3000 + (jam - 2) * 1000;
            }
        }
    }

    if (pilihan == 1) {
        cout << " Jenis Kendaraan : Mobil " << endl;
    } else if (pilihan == 2) {
        cout << " Jenis Kendaraan : Motor " << endl;
    }

    cout << "Total Biaya Parkir Kendaraan Anda : " << Parkir << endl;
   
    while (true) {
    if (biaya < Parkir) {
        cout << " Masukan Uang Anda : ";cin>>biaya;
        cout << " Uang Anda Tidak Cukup " << endl;
        cout << "Silahkan Masukan Uang Anda Sesuai Dengan Total Biaya Parkir" << endl;

    }else if (biaya > Parkir) {
        cout << " Ini Kembalian Anda : " << biaya - Parkir << endl;
        break;
    }else {
        cout << " Uang Anda Pas " << endl;
        cout << " Terima Kasih Telah Menggunakan Sistem Parkir Kami " << endl;
    break;

    }
  }


    return 0;
}