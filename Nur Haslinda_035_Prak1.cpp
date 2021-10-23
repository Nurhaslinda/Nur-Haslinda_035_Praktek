#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float nomor_k, jam, menit, detik;
	string nama;
	
	cout<<"\tWarnet Suka-Suka";
	cout<<"\n================================"<<endl;
	cout<<"Masukkan Nama Anda = ";
	getline(cin,nama);
	cout<<"Masukkan Nomor Komputer Anda = ";cin >> nomor_k;
	cout<<"Lama Pemakaian";
	cout<<"\nJam = ";cin >> jam;
	cout<<"Menit = ";cin >> menit;
	cout<<"Detik = ";cin >> detik;
	
	cout<<"\n----------------------------"<<endl;
	cout<<"	Hasil Tarif";
	cout<<"\n----------------------------"<<endl;
	cout<<"Nama = "<<nama;
	cout<<"\nNomor Komputer = "<<nomor_k;
	cout<<"\nTotal Tarif Pembayaran = " <<(jam*5000)+(menit*5000/60)+(detik*5000/3600)<<endl;
	
	return 0;
}
