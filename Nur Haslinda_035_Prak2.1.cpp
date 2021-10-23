#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int menu;
	float panjang, tinggi, alas, luas, keliling, s_miring, hasil;
	
	cout<<"Menu segitiga siku-siku";
	cout<<"\n1. Hitung panjang sisi miring";
	cout<<"\n2. Hitung Luas";
	cout<<"\n3. Hitung Keliling";
	cout<<"\n4. Keluar Program";
	cout<<"\nMasukkan pilihan anda = ";
	cin>>menu;
	
	cout<<"\asukkan panjang alas segitiga = ";
	cin>>alas;
	cout<<"Masukkan tinggi segitiga = ";
	cin>>tinggi;
	
	s_miring=sqrt(alas*alas+tinggi*tinggi);
	luas=0.5*alas*tinggi;
	keliling=alas+tinggi+s_miring;
	
	switch(menu) {
		case 1:hasil=s_miring;
			cout<<"\nPanjang sisi miring = "<<s_miring;
			break;
		case 2:
			cout<<"Panjang luas segitiga = "<<luas;
			break;
		case 3:
			cout<<"Keliling segitiga = "<<keliling;
			break;
		case 4:
			cout<<"Keluar";
			break;
		default:
		cout<<"MENU TIDAK ADA";	
	}
	
	
	
	
	
	return 0;
}
