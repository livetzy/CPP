#include <iostream>
#include <string>
#include <vector>
using namespace std;



void sapaan(string nama, double umur , string status) {
    cout << "Halo Nama Saya " << nama << endl;
    cout << "Umur : " << umur << endl;
    cout << "Status : " << status << endl;
}

void numeric(int penjumlahan, int pengurangan, double pembagian , double perkalian) {
    cout << "Hasil Penjumlahan : " << penjumlahan << endl;
    cout << "Hasil Pengurangan : " << pengurangan << endl;
    cout << "Hasil Perkalian : " << perkalian << endl;
    cout << "Hasil Pembagian : " << pembagian << endl;
}

int main() {
    
    int x,y;

    vector<string> nama = {"Jabez Chrisopras Ferdinand", "Jordan Theovandy Ferdinand ","Jobel Christalino Ferdinand "} ;
    vector<double> umur = {18,21,13};
    vector<string> status = {"Mahasiswa" , "Mahasigma", "Siswa"};


    sapaan(nama[0], umur[0], status[1]);
    sapaan(nama[1], umur[1], status[0]);
    sapaan(nama[2], umur[2], status[2]);

    cout << "Masukan Nilai X : ";
    cin>>x;
    cout << "Masukan Nilai y : ";
    cin>>y;

    int penjumlahan = x + y;
    int pengurangan = x -  y;
    double perkalian = x * y;
    double pembagian = x / y;

    numeric(penjumlahan,pengurangan,pembagian,perkalian);


}