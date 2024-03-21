#include <iostream>
using namespace std;

int main ()
{
	string Nama;
	string NIM;
	string fakultas;
	string jurusan;
	
	cout <<"==================================================" <<endl;
	cout <<"Program mengisi data dan tampilan data"<<endl;
	cout <<"==================================================" <<endl;
	
	cout << "masukan Nama mahasiswa : " ;
	cin >> Nama;
	
	cout << "masukan NIM Mahaiswa : " ;
	cin >> NIM;
	
	cout << "masukan fakultas Mahaiswa : " ;
	cin >> fakultas;
	
	cout << "masukan jurusan Mahaiswa : " ;
	cin >> jurusan;
	
	cout <<"==================================================" <<endl;
	cout <<"Terimakasih"<<endl;
	cout <<"" <<endl;
	cout <<"==================================================" <<endl;

	cout << "Jurusan anda adalah " << jurusan ;
	
	return 0;
}
