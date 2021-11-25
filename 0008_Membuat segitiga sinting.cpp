#include <iostream>

using namespace std;

int main() {
	int n, n1, n2, s1, s2;
	cout<<"Masukkan tinggi segitiga : ";
	cin>>n;
	n1=n;
	n2=n-1;
	s1 = 0;
	for(int i = 0; i < n2; i++) {
		cout<<"  ";
		for(int k = n1-2; k > 0; k--) {
			cout<<"  ";
		}
		n1--;
		s1++;
		for(int s = 0; s < s1; s++) {
			cout<<" *";
		}
		cout<<endl;
	}
	for(s2 = 0; s2 < n; s2++) {
		cout<<" *";
	}
	cout<<"\n\n";
	cout<<"Terima Kasih";
}
