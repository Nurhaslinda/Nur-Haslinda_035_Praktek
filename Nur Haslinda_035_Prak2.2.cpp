#include <iostream>
using namespace std;


int main() {
	string nama;
	char golongan;
	int jam_k, upah_per_jam, total_upah;
	
	cout<<"==================================================";
	cout<<"\n\tMENGHITUNG GAJI KARYAWAN";
	cout<<"\n==================================================";

	cout<<"\nMasukkan nama anda	= ";
	getline(cin,nama);
	cout<<"Masukkan Golongan anda	= ";
	cin>>golongan;
	cout<<"Masukkan Jumlah jam kerja anda	= ";
	cin>>jam_k;
	
	switch(golongan) {
		case 'A':
			upah_per_jam=5000;
			break;
		case 'B':
			upah_per_jam=7000;
			break;
		case 'C':
			upah_per_jam=8000;
			break;
		case 'D':
			upah_per_jam=10000;
			break;
		default:
			upah_per_jam=0;
	}
	
	cout<<"\n";
	cout<<"\n===================================";
	cout<<"\n\tHasil Perhitungan  ";
	cout<<"\n===================================";
	
	cout<<"\nNama	= 	"<<nama;
	
if(jam_k<=48){
	total_upah=upah_per_jam*jam_k;
	cout<<"\nMenerima Gaji	= Rp. "<<total_upah<<"/minggu";
}else if(jam_k>48){
	total_upah=upah_per_jam*48+(jam_k-48)*4000;
	cout<<"\nMenerima Gaji	= Rp. "<<total_upah<<"/minggu";
}else{
	cout<<"TIDAK MENERIMA GAJI";
}

	return 0;
}
