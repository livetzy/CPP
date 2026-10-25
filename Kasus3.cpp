
#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cout<<"Masukan nilai a :";cin>>a;
    cout<<"Masukan nilai b :";cin>>b;

    if (a<b){
        cout <<"Operator 1 nilai a < b"<<endl;
        for (int i = a; i <= b; i++){
            cout << i <<endl;
        }
    }else if (a>=b) {

        c = b * 2 ;
        
        cout<<"Operator 2 nilai a > b, b * 2"<<endl;
        for (int i = a; i <= c; i++){
            cout << i <<endl;

        }
    }
    return 0;
}

