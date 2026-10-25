#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double Total_Belanja, Diskon;

    cout <<"\n";
    cout << "Selamat Datang Di Sistem Diskon" << endl;
    cout << "===========================================" << endl;
    cout <<"\n";
    cout << "Masukan Total Belanja :";cin>>Total_Belanja;

    if (Total_Belanja <100000) {
        Diskon = 0;
        
    }else if (Total_Belanja >=100000 && Total_Belanja < 500000) {
        Diskon = Total_Belanja * 0.10;

    }else if (Total_Belanja >=500000 && Total_Belanja < 1000000) {
        Diskon = Total_Belanja * 0.20;

    }else if (Total_Belanja >= 1000000) {
        Diskon = Total_Belanja * 0.30;

    }else {
        cout << "Inputan Salah" << endl;
    }

    cout << fixed << setprecision(0);
    cout <<"\n";
    cout << " Catatan Belanja Anda : " << endl;
    cout << "Total Belanja : " << Total_Belanja << endl;
    cout << "Diskon : " << Diskon << endl;
    cout << "Total pengeluaran setelah Di diskon : " << Total_Belanja - Diskon << endl;
    

}