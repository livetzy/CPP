#include <iostream>
#include <string>
using namespace std;

string nama, jurusan, universitas;

int main (){

    nama = "Mawar";
    jurusan = "Teknik Informatika";
    universitas = "Dian Nuswantoro University";

    cout << "Nama Saya :" << nama <<endl;
    cout << "Jurusan :" << jurusan <<endl;
    cout << "Universitas :" << universitas <<endl;
 
    float A,B;
    int penjumlahan,pengurangan,perkalian;
    float pembagian;

    cout << "Masukan Nilai Variabel A :";cin >>A;
    cout << "Masukan Nilai Variabel B :";cin >>B;

    penjumlahan = A + B;
    pengurangan = A - B;
    perkalian = A * B;
    pembagian = A / B;

    cout << "Hasil Operasi :"<<endl;
    cout << A <<" + "<< B <<" = "<<penjumlahan<<endl;
    cout << A <<" - "<< B <<" = "<<pengurangan<<endl;
    cout << A <<" * "<< B <<" = "<<perkalian<<endl;
    cout << A <<" / "<< B <<" = "<<pembagian<<endl;

    int a,b;

    a = 3;
    b = 2;

    cout << a <<" < "<< b <<" Hasil :"<< (a < b) << endl;
    cout << a <<" > "<< b <<" Hasil :"<< (a > b) << endl;
    cout << a <<" == "<< b <<" Hasil :"<< (a == b) << endl;
    cout << a <<" != "<< b <<" Hasil :"<< (a != b) << endl;

    return 0;

}