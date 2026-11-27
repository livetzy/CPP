#include <iostream>
using namespace std;

int main() {

    int arrNilai[2][3];

    // for (int i = 1 ; i <= 2 ; i++) {

    //     for(int j=1 ; j<=3 ; j++) {
    //         cout << "Masukkan nilai [" << i << "][" << j << "]: ";
    //         cin>>arrNilai[i][j];
    //     }
    // }

    // for (int i=1 ; i<=2; i++) {
    //     for (int j = 1; j<=3 ; j++) {
    //         cout << "i : "<<i<< ", j : "<<j<<", nilai : "<< arrNilai[i][j]<<endl;
    //     }
    // }


    // int matriksA[11][11], matriksB[10][10];
    // int matriksAtranspose[10][10], matriksABtambah[10][10], matriksABkurang[10][10], matriksABkali[10][10];
    // int baris,kolom;

    // cout << "masukan baris untuk matriks A dan B : ";
    // cin>>baris;

    // cout << "masukan kolom untuk matriks A dan B : ";
    // cin>>kolom;

    // for (int i = 1 ; i <= baris ; i++) {
    //     for(int j = 1 ; j <= kolom ; j++) {
    //         cout << "matriksA["<<i<<"] ["<<j<<"] = ";
    //         cin>>matriksA[i][j];
    //     }
    // }

    // cout << "matriksA" << endl;
    // for (int i = 1 ; i <= baris ; i++) {
    //     for (int j = 1 ; j <= kolom ; j++) {
    //         cout << matriksA[i][j]<< "\t";
    //     }
    //     cout<<endl;
    // }


    int nilai[10][10] = {} ;
    string nama[] ={"jabez", "jordan", "jobel"};
    string keterangan[] = {"Nama", "Matematika", "Bahasa indonesia", "Bahasa Inggris", "RataRata"};
    int RataRata;

    for (int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            cout << "masukan nilai ["<<nama[i]<<"] ["<<keterangan[j + 1]<<"] :  ";
            cin>>nilai[i][j];
        }
    }

    cout<< "LAPORAN NILAI MAHASISWA"<<endl;
    cout<< "=------------------------------------------------------------------------------------="<<endl;
    for (int i = 0 ; i < 5 ; i++) {
        cout << keterangan[i]<<"\t\t";
    }cout<<endl;
    for ( int i = 0 ; i < 3 ; i++) {
        cout<<nama[i]<<"\t\t";
        for ( int j = 0 ; j < 3 ; j++) {
            cout<<nilai[i][j]<<"\t\t\t";
        }cout<<endl;
    }
    cout<< "=------------------------------------------------------------------------------------="<<endl;


}