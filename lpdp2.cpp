#include <iostream>
using namespace std;


int main () {
    double c;

    cout << "Masukan Suhu dalam calsius :"; cin >> c;
    cout << "Suhu dalam Fahrenheit : " << (c * 9/5) + 32 << endl;
    return 0;
}