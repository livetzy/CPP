
#include <iostream>
using namespace std;

int main() {
    int n,upah,lembur;
    int overpay, upahReguler , totalupah;;

    cout<<"Masukan jumlah jam kerja dalam sebulan:";cin>>n;
    cout<<"Masukan upah karyawan :";cin>>upah;
    cout<<"Masukan jumlah lembur kerja dalam sebulan:";cin>>lembur;

    if(lembur>=30){
        overpay = (n - lembur) * upah * 40/100;
    }else if(lembur<30){
        overpay = (n - lembur) * upah * 20/100;
    }

    upahReguler = n * upah;
    totalupah = upahReguler + overpay;

    cout<<"Upah Reguler :"<<upahReguler<<endl;
    cout<<"Bayaran Tamabahan :"<<overpay<<endl;
    cout<<"Total Upah :"<<totalupah<<endl;


    return 0;
}