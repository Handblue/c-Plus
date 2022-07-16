#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int array []={1,4,5,7};
	//dizilerde ilk değer sıfırınca indexte index0 te yer alır.
	cout<<"3. siradaki deger deger= "<<array[3]<<endl;
    
	for (int a=0;a<5;a++){
		
		cout<<a<<". siradaki deger="<<array[a]<<endl;
	}
		
	
	
	

	return 0;
}
