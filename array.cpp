#include <iostream>
using namespace std;

int main() {
    int jumlah = 0;
    int a = 0;
    int b [] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = a ; i < 10 ; i++) {
        if ( i <= 8 ) {
            cout << b[i] << " + " ;
        }else {
            cout << b[i] << " ";
        }
        jumlah += b[i];
    }
    cout << " = "<< jumlah << endl;

    int i[5]  ;
    i [0] = 1;
    i [1] = 2;
    i [2] = 3;
    i [3] = 4;
    i [4] = 5;
    i [5] = 6;
    for (int a = 0 ; a <= 5 ; a ++) {
        cout << i[a] << endl;
    }

    int j [] = {};

    int l ;
    cout << "masukan jumlah angka yang ingin anda inputkan : ";
    cin>>l;

    for (int k = 1 ; k <= l ; k++) {
        cout << "masukan angka ke-"<<k<< " :";
        cin>>j[k];
    }
    cout<<endl;

    int jmlhpositif = 0;
    cout << "Angka Positif :" << endl;
    bool angkaPertama = true;
    for (int p = 1 ; p <= l ; p++) {
        if ( j[p] % 2 == 0 ) {
            if (!angkaPertama) {
                cout << " + ";
            }
            cout << j[p];
            angkaPertama = false;
            jmlhpositif += j[p];
        }
    }
    cout << " = " << jmlhpositif << endl;
    
    int jmlhnegatif = 0;
    cout << "Angka Negatif :" << endl;
    bool angkaNegatifPertama = true;
    for (int p = 1 ; p <= l ; p++) {
        if ( j[p] % 2 != 0 ) {
            if (!angkaNegatifPertama) {
                cout << " + ";
            }
            cout << j[p];
            angkaNegatifPertama = false;
            jmlhnegatif += j[p];
        }
    }
    cout << " = " << jmlhnegatif << endl;

}


