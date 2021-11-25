#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float rupiah;
	float D, Y, Ri, E;
	
	cout<<"Masukkan nilai uang dalam bentuk rupiah : Rp. ";
	cin>>rupiah;
	
	D=rupiah/14199;
	cout<<"Nilai uang Rp. "<<rupiah<<" Sama dengan $ ";
	cout<<setprecision(3)<<D;
	return 0;
}
