#include <iostream>
using namespace std;

int main() {

    int nilai[0][0][0]  = {};
    int baris ;
    int kolom ;
    int indeks;

    cout << "masukan jumlah baris : ";
    cin>>baris;

    cout << "masukan jumlah kolom : ";
    cin>>kolom;

    cout << "masukan jumlah indeks :";
    cin>>indeks;

    for (int i = 0 ; i < baris ; i++) {
        for(int j = 0 ; j < kolom ; j++) {
            for (int k = 0 ; k < indeks ; k++) {
                  cout << "nilai["<<i<<"] ["<<j<<"]["<<k<<"] = ";
                   cin>>nilai[i][j][k];
            }
        }
    }

    for (int i = 0 ; i < baris ; i++) {
        for(int j = 0 ; j < kolom ; j++) {
            for (int k = 0 ; k < indeks ; k++) {
                  cout <<", nilai : "<<nilai[i][j][k];
            }
        }
    }









}