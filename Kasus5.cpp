#include <iostream>
using namespace std;

typedef struct {
    int x;
    int y;
}nilai;

int main() {

    nilai n1;

    cout<<"Masukan nilai x :";
    cin>>n1.x;
    cout<<"Masukan nilai y :";
    cin>>n1.y;


    cout<<"Nilai dari X ="<< n1.x <<endl;
    cout<<"Nilai dari Y ="<< n1.y <<endl;
    
    return 0;
}
