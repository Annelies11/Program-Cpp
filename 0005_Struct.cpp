#include <iostream>
#include <cstring>

using namespace std;

struct buku {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main() {
	struct buku buku1;
	struct buku buku2;
	
	strcpy(buku1.title, "Belajar makan bentis");
	strcpy(buku1.author, "Aris Mahmudi");
	strcpy(buku1.subject, "Suwung");
	buku1.book_id = 11031999;
	
	cout<< "Judul buku : "<<buku1.title<<endl;
	cout<< "Pengarang  : "<<buku1.author<<endl;
	cout<< "Tentang    : "<<buku1.subject<<endl;
	cout<< "Nomor Seri : "<<buku1.book_id<<endl;
	return 0;
}
