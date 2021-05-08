/**
BIMBINGAN KSN INFORMATIKA
DAY 2 - User input, if else, dan while loop

Challenge 2 - Membuat kondisi if else

**/

#include <iostream>
using namespace std;

int main() {
	int usia;

	cout<<"Masukan usia anda!";
	cin>>usia;

	if (usia>=17) {
		cout<<"Anda sudah cukup umur";
	}
	else {
		cout<<"Anda masih di bawah umur";
	}
	
	return 0;
}
