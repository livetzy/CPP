#include <iostream>
using namespace std;

int main (){

    int i = 15 , *p, *q;

    p = &i;

    *p = 20;

    cout << "Nilai i : "<< i << endl;

    i = 50 ;

    cout << "Nilai i :" << i <<endl;
    cout << "Nilai p :" << p <<endl;

    q = &i;
    *q = 100;

    cout << "Nilai i :"<< i << endl;
    cout << "Nilai q :"<< q << endl;
    cout << "Nilai p :"<< p << endl;

    return 0;
}