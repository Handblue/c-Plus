#include <iostream>

using namespace std;

int besfazlasi(int sayi){
	
	sayi=sayi+5;
	return sayi;
	
}

int main(int argc, char** argv) {
	
	int a;
	cout<<"deger giriniz"<<endl;
	cin >> a;
	
	 cout<<"girdiginiz degerin 5 fazlasi="<<besfazlasi(a);
	 
	

	return 0;
}
