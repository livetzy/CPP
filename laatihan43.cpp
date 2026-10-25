#include <iostream>
#include <string>
using namespace std;
int main() {

    double Membership , Usia , Tiket , Harga=50000;
    double  Diskon_Tambahan, Diskon , Total , setelahDiskon;
    string jenis , kategoriUsia, bonus="";

    cout << "" << endl;
    cout << " Selamat Datang Di Bioskop " << endl;
    cout << "==============================" << endl;
    cout << "" << endl;

    cout << "Masukan Membership Anda " << endl;
    cout << "1. VIP" << endl;
    cout << "2. Member" << endl;
    cout << "3. Reguler" << endl;
    cout << "Masukan Membership Anda (1-3) : ";
    cin >> Membership;

    cout << "Pilih Usia Anda " << endl;
    cout << "1. Anak-anak (< 12 Tahun)" << endl;
    cout << "2. Dewasa (12 - 59 Tahun)" << endl;
    cout << "3. Lansia (>= 60 Tahun)" << endl;
    cout << "Masukan Usia Anda (1-3) : ";
    cin >> Usia;

    cout << "Masukan Jumlah Tiket Yang Ingin Dibeli : ";cin>>Tiket;

    if (Membership == 1) {
        jenis = "VIP";
        if (Usia == 1 || Usia == 3 ) {
            Diskon = 0.30;
        }else if (Usia == 2) {
            Diskon = 0.20;
        }
    }else if (Membership == 2) {
        jenis = "Member";
        if (Usia == 1 || Usia == 3 ) {
            Diskon = 0.20;
        }else if (Usia == 2) {
            Diskon = 0.10;
        }
    }else if (Membership == 3) {
        
        jenis = "Reguler";
        if (Usia == 1) {
            Diskon = 0.10;
        }else if (Usia == 2 ) {
            Diskon = 0;
        }else if (Usia == 3) {
            Diskon = 0.15;
        }
    }else {
        cout << "Pilihan Membership Tidak Valid" << endl;
    }

    if (Usia == 1) {
        kategoriUsia =  "Anak - Anak ";
    }else if (Usia == 2) {
        kategoriUsia = "Dewasa";
    }else if (Usia == 3) {
        kategoriUsia = "Lansia";
    }

    if (Tiket >= 5) {
       Diskon_Tambahan = 0.05;
    }else {
        Diskon_Tambahan = 0;
    }

    Total = Harga * Tiket * (1 - Diskon) ;
    setelahDiskon = Total * (1 - Diskon_Tambahan);

    cout <<"\n"<<endl;
    cout << "=========== RINCIAN PEMBAYARAN ==========" << endl;
    cout << "Membership : " << jenis << endl;
    cout << "Kategori Usia : " << kategoriUsia << endl;
    cout << "Jumlah tiket yang di pesanan : " << Tiket << endl;
    cout << "Harga Awal : " << Harga * Tiket << endl;
    cout << "Diskon Membership : " << Diskon * 100 <<"%"<<endl;
    cout << "Diskon Tambahan : " <<Diskon_Tambahan * 100 <<"%"<<endl;
    if (Diskon_Tambahan > 0) {
        cout << "Kamu Mendapatkan Bonus 1 Popcorn " << endl;
    }
    cout << "Total Pembayaran : " << Total << endl;


}