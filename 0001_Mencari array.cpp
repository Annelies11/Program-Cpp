#include <iostream>

using namespace std;

int main() {
	cout<<"Program pencarian array"<<endl;
	cout<<"======================="<<endl;
	
	int input[100], arr_hitung, i, num;
	
	cout<<"Masukkan jumlah elemen array : ";
	cin>>arr_hitung;
	
	cout<<"Input : "<<arr_hitung<<" angka :\n";
	//simpan setiap angka yang diinput ke dalam array
	for(i=0; i<arr_hitung; i++) {
		cin>>input[i];
	}
	cout<<endl;
	cout<<"Input angka yang akan dicari : ";
	cin>>num;
	//proses pencarian array
	for(i=0; i<arr_hitung;i++) {
		if(input[i] == num) {
			cout<<"angka ditemukan pada indek ke-"<<i+1;
			break;
		}
	}
	if (i == arr_hitung) {
		cout<<"Angka tidak ditemukan";
	}
	cout<<endl;
	return 0;
	
}
