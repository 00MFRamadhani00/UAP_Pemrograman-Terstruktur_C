#include <iostream>
#include <stack>


using namespace std;

int main(){
  stack <string> tumpukan; //deklarasi variabel
  int pilih;
  string input;
 
do{
  cout <<"=================================================" <<endl; 
  cout <<"======Program Pendaftaraan Karyawan======" << endl;
  cout <<" 1. Masukan data karyawan" << endl;
  cout <<" 2. Menghapus data" << endl;
  cout <<" 3. Mengecek data karyawan" <<endl;
  cout <<" 4. Hapus "<<endl;
  cout <<" 5. keluar Program" <<endl;
  cout <<"=================================================" <<endl;
  
  cout <<"Masukan Pilihan : ";
  cin >> pilih;
}
