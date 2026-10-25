#include <iostream>
#include <string>
using namespace std;

int main() {

    string nama,jurusan,universitas;

    cout << "Masukan nama Lengkap anda anda :";
    getline(cin,nama);
    cout << "Jurusan : ";
    getline(cin,jurusan);
    cout << "Universitas :";
    getline(cin,universitas);
    cout<<" "<<endl;
    cout << "Biodata anda : " << endl;
    cout << "Nama saya " << nama << endl;
    cout << "Jurusan :" << jurusan << endl;
    cout << "Universitas :" << universitas << endl;


    return 0;
}