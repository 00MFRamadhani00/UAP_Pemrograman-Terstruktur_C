#include <iostream>
#include <conio.h>
#include <windows.h>
#include <queue>

using namespace std;

int main(){
	queue <string> antrian;
	int pilih;
	string data;
	
	do{
		    cout <<"=================================================" <<endl 
			 <<"       Program Pendaftaraan Karyawan      " << endl
			 <<"=================================================" <<endl   
			 <<" 1. Masukkan nama pendaftar" << endl
			 <<" 2. Selesaikan antrian terdepan" << endl
			 <<" 3. Kosongkan antrian" <<endl
			 <<" 4. Mengecek antrian pendaftaran"<<endl
			 <<" 5. Keluar" <<endl
			 <<"=================================================" <<endl;
			 
		cout<<"Menu Yang Dipilih: ";cin>>pilih;
		cin.ignore(256, '\n');
		
	if(pilih<1||pilih>5){
		cout<<"Pilih Menu Lain";
		Sleep(1500);
	}else{
		switch(pilih){
			case 1:
				cout<<"Masukkan: ";
				getline(cin, data);
				antrian.push(data); 
				cout << "Data " << data << " Telah Dimasukkan";
				Sleep(1500); 
				system("CLS");
				break;
				
			case 2:
				if(antrian.empty()){
					cout<<"Antrian Kosong";
				}else{
					antrian.pop();
					cout << "Antrian terdepan telah selesai";
				}
				Sleep(1500); 
				system("CLS");
				break;
				
			case 3:
				if(antrian.empty()){
					cout<<"Antrian Kosong";
				}else{
					antrian.empty();
					cout << "Antrian dikosongkan!";
				}
				Sleep(1500); 
				system("CLS");
				break;
				
			case 4:
				if(antrian.empty()){		
					cout <<"Data kosong\n";		
				}else{
					cout <<"Antrian Data : ";
					while (!antrian.empty()){
						cout <<"\t"<<antrian.front() <<"\n\t";	
						antrian.pop();
					}
				}
				Sleep(5000); 
				system("CLS");
				break;
				
			case 5:
				getch();
				break;
				
			}			
		}	
	system("CLS");
	}while (pilih != 5);
	
	cout << "Antrian ditutup";
	return 0;
}
