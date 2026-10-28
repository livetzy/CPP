
#include <iostream>
using namespace std;

int main() {
    int a,y;
    cout<<"SOAL 1"<<endl;
    cout<<"y = a^3 + 7"<<endl;
    cout<<"Masukan nilai Variabel A :"; cin >> a;
    y = a * a * a + 7;
    cout <<"hasil dari Y = "<<y<<endl;
 
    int b,c,x;
    cout<<" SOAL 2"<<endl;
    cout<<"y = ax^2 + bx + c"<<endl;
    cout<<"Masukan nilai a :"; cin >>a;
    cout<<"Masukan nilai b : "; cin >>b;
    cout<<"Masukan nilai c : "; cin >>c;
    cout<<"Masukan nilai x : "; cin >>x;

    y = a*(x * x) + b * x + c;

    cout <<"Hasil dari y = "<<y<<endl;

    int d,e,jumlah,ratarata;
    cout<<"SOAL 3"<<endl;
    cout<<"a . Tentukan jumlah dan rata-rata dari 5 bilangan"<<endl;
    cout<<"Masukan angka pertama : ";cin >>a;
    cout<<"Masukan angka kedua : ";cin >>b;
    cout<<"Masukan angka ketiga : ";cin >>c;
    cout<<"Masukan angka keempat : ";cin >>d;
    cout<<"Masukan angka kelima : ";cin >>e;

    jumlah = a + b + c + d + e;
    ratarata = jumlah / 5;
    cout<<"POINT A"<<endl;
    cout<<"Jumlah total 5 bilangan ="<<jumlah<<endl;
    cout<<"POINT B"<<endl;
    cout<<"Rata - Rata 5 bilangan ="<<ratarata<<endl;

    int celcius,fahrenheit,kelvin,Reamur;
    cout<<"SOAL 4"<<endl;
    cout<<"a. Buatlah program konversi suhu"<<endl;
    cout<<"a. Celcius to Fahrenheit,kelvin,reamur"<<endl;
    cout<<"Masukan nilai Celsius = "; cin>>celcius;
    fahrenheit = (celcius * 9/5) + 32 ;
    kelvin = celcius + 273;
    Reamur = celcius * 4/5;

    cout<<"POINT A"<<endl;
    cout<<"Celsius to fahrenheit ="<<fahrenheit<<endl;
    cout<<"POINT B"<<endl;
    cout<<"Celsius to kelvin ="<<kelvin<<endl;
    cout<<"POINT C"<<endl;
    cout<<"Celsius to Reamur="<<Reamur<<endl;

    return 0;
}

    

    