#include <iostream>
using namespace std;
int main(){
	int harga_pena;
	int harga_buku;
	int harga_penghapus;
	int harga_penggaris;
//	
	cout<<"harga pena      : ";
	cin>>harga_pena;
	cout<<"harga buku      : ";
	cin>>harga_buku;
	cout<<"harga penghapus : ";
	cin>>harga_penghapus;
	cout<<"harga penggaris : ";
	cin>>harga_penggaris;
//	
	cout<<"-----------total harga----------- \n";
	cout<<"harga 9 pena      : Rp"<<(9*harga_pena)<<endl;
	cout<<"harga 2 buku      : Rp"<<(2*harga_buku)<<endl;
	cout<<"harga 3 penghapus : Rp"<<(3*harga_penghapus)<<endl;
	cout<<"harga 1 penggaris : Rp"<<(1*harga_penggaris)<<endl;
}
