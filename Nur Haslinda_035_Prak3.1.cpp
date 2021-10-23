#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int i, kuadrat, jumlah_b, jumlah_k;
	float akar, jumlah_a;
	
	cout<<"\tJUMLAH 6 SUKU PERTAMA"<<endl;
	cout<<"====================================="<<endl;
	jumlah_b=0;
	jumlah_k=0;
	jumlah_a=0;
	
	for(i=1; i<=6; i++){
		kuadrat=i*i*i;
		akar=sqrt(i);
		jumlah_b=i;
		jumlah_k=jumlah_b+kuadrat;
		cout<<"\nSuku ke-"<<i<<" = "<<kuadrat<<endl;
	}
	cout<<"\n";
	cout<<"Jumlah suku ke-"<<jumlah_b<<" = "<<jumlah_k;
	
	
return 0; 	
}
