#include <iostream>

using namespace std;

int main() {
	int n;
	cout<<"Masukkan tinggi segitiga : ";
	cin>>n;
	
	for(int i = 0; i < n; i++) {
		cout<<" *";
		for(int k = 0; k < i; k++) {
			cout<<" *";
		}
		cout<<endl;
	}
	cout<<"\n\n";
	cout<<"Terima Kasih";
}
