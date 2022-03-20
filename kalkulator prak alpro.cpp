#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main (){
	
	int angka1, angka2, pilih, hasil;
	string operasi;
	
	cout<<"Operasi kalkulator \n";
	cout<<"1. pengurangan\n";
	cout<<"2. Penjumlahan\n";
	cout<<"3. Perkalian\n";
	cout<<"4. Pembagian\n";
	cout<<"Pilihlah operasi yang anda inginkan : ";
	cin>>pilih;
	
	cout<<"Masukan bilangan pertama : "; cin>>angka1;
	cout<<"\n Masukan bilangan kedua : "; cin>>angka2;
	
	if(pilih==1) {
	     hasil=angka2-angka1;
	     cout<<" "<<angka1<<" - "<<angka2<<" = "<<hasil<<" ";
    }
	if(pilih==2){
	     hasil=angka1+angka2;
	     cout<<" "<<angka1<<" + "<<angka2<<" = "<<hasil<<" ";
    }
	if(pilih==3){
	     hasil=angka1*angka2;
	     cout<<" "<<angka1<<" x "<<angka2<<" = "<<hasil<<" ";
    }
	if(pilih==4){
	     hasil=angka1/angka2;
	     cout<<" "<<angka1<<" : "<<angka2<<" = "<<hasil<<" ";
    }
	else {
		cout<<" ";
	}
	
	return 0;	
}
