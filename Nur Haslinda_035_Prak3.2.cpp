#include <iostream>
using namespace std;

int main(){
	int i, n, c, nilai_a=3, selisih=4, jumlah=0;
	
	cout<<"\tMenghitung jumlah deret"<<endl;
	cout<<"======================================="<<endl;
	cout<<"Nilai awal = 3";
	cout<<"\nSelisih Nilai = 4"<<endl;
	
	cout<<"\nMasukkan deret ke-n = ";
	cin>>n;
	cout<<"\n";
	cout<<nilai_a<<",";
	jumlah=jumlah+nilai_a;
	for(i=0; i<n-1; i++){
		c=nilai_a+selisih;
		nilai_a=c;
		cout<<c<<",";
		jumlah=jumlah+c;
	}
	cout<<"\n";
	cout<<"\nJumlah Deret ke-"<<n<<" = "<<jumlah;

	return 0;
}
