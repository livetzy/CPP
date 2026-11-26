#include <iostream>
#include <vector>
using namespace std;

int main() {
    int baris;
    int kolom;
    int indeks;

    cout << "masukan jumlah baris : ";
    cin >> baris;

    cout << "masukan jumlah kolom : ";
    cin >> kolom;

    cout << "masukan jumlah indeks : ";
    cin >> indeks;

    if (!cin || baris <= 0 || kolom <= 0 || indeks <= 0) {
        cerr << "Jumlah baris, kolom, dan indeks harus berupa bilangan positif.\n";
        return 1;
    }

    vector<vector<vector<int>>> nilai(
        baris, vector<vector<int>>(kolom, vector<int>(indeks))
    );

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            for (int k = 0; k < indeks; k++) {
                cout << "nilai[" << i + 1 << "][" << j + 1 << "][" << k + 1 << "] : ";
                cin >> nilai[i][j][k];
            }
        }
    }

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            for (int k = 0; k < indeks; k++) {
                cout << "nilai[" << i + 1 << "][" << j + 1 << "][" << k + 1
                     << "] = " << nilai[i][j][k] << '\n';
            }
            cout << '\n';
        }
    }

    return 0;
}
