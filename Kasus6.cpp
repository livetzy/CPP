#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
    int n;
    int Luas_persegi;
    int total = 0;
    string is_ganjil, is_genap;

    cout<<"Masukan nilai n :";cin>>n;

    vector <int> sum(n + 1);
    Luas_persegi = n * n;

    if (n % 2 == 0){
        
        is_ganjil = "False";
        is_genap = "True";

    }else if (n % 2 != 0){

        is_ganjil = "True";
        is_genap = "False";
    }


    for(int i = 0 ; i <= n ; i++){
        sum[i] = i;
    }

     for(int i = 1 ; i <= n ; i++){
        total += i;
    }


    cout<<"luas persegi = "<<Luas_persegi<<endl;
    cout<<"is_Ganjil = "<<is_ganjil<<endl;
    cout<<"is_Genap = "<<is_genap<<endl; 

    cout<< "Urutan deret bilangan hingga batas n";
    for (int i = 1; i <= n; i++){
        cout << sum[i] << endl;
    }

    cout<<"Hasil penjumlahan array = "<<total<<endl;

    float rata_rata = total / n;

    cout<<"Rata - Rata = "<< rata_rata << endl;


    return 0;
}
