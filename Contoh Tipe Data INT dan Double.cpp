#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	double hasil;
	
	cout <<"===============================================" <<endl;
	cout <<"ini adalah program oprasi aritmatika " <<endl;
	cout <<"===============================================" <<endl;
	
	cout <<"silahkan pilih mu oprasi apa : " <<endl;
	cout <<"1. pertambahan" <<endl;
	cout <<"2. pengurangan" <<endl;
	cout <<"3. perkalian " <<endl;
	cout <<"4. pembagian " <<endl;
	
	cout <<"masukan pilihan : " <<endl;
	cin >> a;
	
	if(a==1)
	{
		system("cls");
		cout <<"masukan angka pertama : ";
		cin >> b;
		cout <<"masukan angka kedua : ";
		cin >> c;
		hasil = b+c;
		cout <<"hasilnya adalah : " << hasil <<endl;
	}
	else if (a==2)
	{
		system("cls");
		cout <<"masukan angka pertama : ";
		cin >> b;
		cout <<"masukan angka kedua : ";
		cin >> c;
		hasil = b-c;
		cout <<"hasilnya adalah : " << hasil <<endl;
	}
	else if (a==3)
	{
		system("cls");
		cout <<"masukan angka pertama : ";
		cin >> b;
		cout <<"masukan angka kedua : ";
		cin >> c;
		hasil = b*c;
		cout <<"hasilnya adalah : " << hasil <<endl;
	}
	else if (a==4)
	{
		system("cls");
		cout <<"masukan angka pertama : ";
		cin >> b;
		cout <<"masukan angka kedua : ";
		cin >> c;
		hasil = b/c;
		cout <<"hasilnya adalah : " << hasil <<endl;
	}
	else
	{
		system("cls");
		cout <<"pilihan tidak ada"<<endl;
	}
	
	cout <<"===============================================" <<endl;
	cout <<"terima kasih sudah menggunakan program ini " <<endl;
	cout <<"===============================================" <<endl;
	
	return 0;
	
}
