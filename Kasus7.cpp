#include <iomanip>
#include <iostream>
using namespace std;


int main() {

    int n ;
    int rib, rat, pul, sat;

    cout << "Masukan Nilai N ";
    cin>>n;

    if ( n >= 0 && n <= 9999 ) {
        rib = n/1000;
        rat = (n % 1000) /100;
        pul = (n % 100) / 10;
        sat = n % 10;
    }

    cout << rib << " ribuan ," << rat << " ratusan ," << pul << " puluhan ,"  << sat << " satuan" << endl;
    

    int total = 0;
    for (int i = 1; i <= 4; i++){
        total += i;
    }
    cout << total << endl;

    for (int i = 1 ; i <= 3 ; i++) {
        for (int j = 1 ; j <=  3 ; j++){
            cout << j;
        }
        cout<<endl;
    }


    int hasil = 0;
    for (int i = 1; i <= 3; i++) { 
        for (int j = 1; j <= 3; j++)
        hasil += i * j; 
    }
    cout << hasil << endl;

    int total1 = 0;
    for (int i = 1; i <= 5; i++) {
           if (i % 2 == 0)
           total1 += i; 
        } 
        cout << total1 << endl;
    
    int total2 = 0; 
    for (int i = 1; i <= 3; i++) { 
        for (int j = 1; j <= 3; j++) { 
            if (i + j > 3) total2++; 
        } 
    }
    cout << total2 <<endl;


    int count = 0; 
    for (int i = 1; i <= 4; i++) {    
        for (int j = 1; j <= 4; j++) {        
            if (i < j) count++;    
        } 
    }
    cout << count;


    for (int i = 1; i <= 3 ; i++) {
        for (int j = 1; j <= 2; j++){
            cout << "*";
        }cout<<endl;
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1 ; j <= i ; j++) {
            cout << "*";
        }cout<<endl;
    }





}