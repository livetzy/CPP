#include <iostream>
using namespace std;

int main() {

    int a = 0;
    int b [] = {1,2,3,4,5,6,7,8,9,10};

    cout << "masukan angka yang anda cari di dalam array : ";
    cin>>a;

    for (int i = 0 ; i < 10 ; i++) {
        cout << b[i] << " ";
    }

    
}