/******************************************************
Nama file: cin_string1.cpp
*******************************************************/

#include <iostream>
#include <string>

using namespace std;


int main() {   
   string nama,alamat;
   
   cout<<"Masukkan nama: ";
   
   // membaca satu baris string
   getline(cin, nama);

   std::cout << "masukkan alamat : ";
   getline(cin, alamat);
   
   cout<<"Hai "<<nama << " dari " << alamat 
            <<", selamat datang di pemrograman C++"
            <<endl;
   
   return 0;
}
