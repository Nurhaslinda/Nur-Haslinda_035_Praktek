#include <iostream>
using namespace std;

int main(){
	cout<<"\t\t\tTabel Perkalian"<<endl;
	cout<<"==========================================================================="<<endl<<endl;
	
	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			cout<<i*j<<"\t";
		}
		cout<<"\n"<<endl;
	}
	
	return 0;
}
