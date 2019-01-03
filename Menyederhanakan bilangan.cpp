#include <iostream>

using namespace std;

int pecahan(){
	int a,b,c,d;
	
	cout << "Program Menyederhanakan Bilangan Pecahan"<<endl;
	cout << "----------------------------------------"<<endl;
	
	cout << "Masukan Pembilang = ";
	cin >>a;
	
	cout << "\nMasukan Penyebut= ";
	cin >>b;
	
	c=a/b;
	d=a%b;
	
	if (a%b==0)
		cout<<"\nBilangan "<<a<<"/"<<b<<" Disederhanakan Menjadi "<<c;
		
	else if (a%b!=0)
		cout<<"\nBilangan "<<a<<"/"<<b<<" Disederhanakan Menjadi "<<c<<" "<<d<<"/"<<b;
		
	return 0;	
}

int main (){
	
	pecahan();
}
