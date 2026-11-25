#include <iostream>
using namespace std;

int main() {

    int arrNilai[2][3];

    for (int i = 0 ; i < 2 ; i++) {

        for(int j=0 ; j<3 ; j++) {
            cout << "Masukkan nilai [" << i << "][" << j << "]: ";
            cin>>arrNilai[i][j];
        }
    }

    for (int i=0 ; i<2; i++) {
        for (int j = 0; j<3 ; j++) {
            cout << "i : "<<i<< ", j : "<<j<<", nilai : "<< arrNilai[i][j]<<endl;
        }
    }

    





}