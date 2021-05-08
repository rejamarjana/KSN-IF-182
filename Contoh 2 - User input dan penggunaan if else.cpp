/**
BIMBINGAN KSN INFORMATIKA
DAY 2 - Variabel & Pengantar C++ 

Contoh 2 - user input dan menggunakan kondisi if else

**/

#include <iostream>
using namespace std;

int main() {
	//buat variabel a dan b
	int a, b;
    
	//input user untuk variabel a dan b
    cout<<"Masukan nilai a\n";
    cin>>a;
    cout<<"Masukan nilai n\n";
    cin>>b;
    
    //membandingkan nilai a dan b
    if (a>b) {
        cout<<"a lebih besar dari b";
    }
    else {
        cout<<"a tidak lebih besar dari b";
    }
	
	return 0;
}
