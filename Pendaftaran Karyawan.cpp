#include <iostream>
#include <stack>


using namespace std;

int main(){
  stack <string> tumpukan; //deklarasi variabel
  int pilih;
  string input;
 
do{
  cout <<"=================================================" <<endl; 
  cout <<"        Program Pendaftaran Karyawan        " << endl;
  cout <<" 1. Masukan data karyawan" << endl;
  cout <<" 2. Menghapus data" << endl;
  cout <<" 3. Mengecek data karyawan" <<endl;
  cout <<" 4. Hapus "<<endl;
  cout <<" 5. keluar Program" <<endl;
  cout <<"=================================================" <<endl;
  
  cout <<"Masukan Pilihan : ";
  cin >> pilih;
  
  switch (pilih){		
	case 1:
		cout<<"============================================"<<endl;
		cout<<" Masukan data  :" ;
		cin >> input;	
		tumpukan.push(input);
		system("CLS");
		cout <<endl;
		break;
    
   case 2:
		if (tumpukan.empty()){		
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl ;
			cout <<"             Data sudah terhapus"<<endl ;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl ;
		}else{
			cout <<"Data karyawan ["<<tumpukan.top() <<"] telah di hapus" <<endl;
			tumpukan.pop();
		}
		cout <<endl;
		break;
}
