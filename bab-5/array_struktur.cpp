/******************************************************
Nama file: array_struktur.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <iomanip>	// std::setw()

using kontak = struct {
   std::string nama;
   std::string alamat;
   std::string nohp;
};

int main() {
   // array dari tipe struktur
   kontak daftar[100];
   int n;
   
   std::cout<<"Masukkan jumlah data: ";
   std::cin>>n;
   
   std::cout<<std::endl;
   for (auto i {0}; i<n; i++) {
      std::cin.ignore();
      std::cout<<"DATA KE-"<<i+1<<std::endl;
      std::cout<<"Nama\t: ";
      getline(std::cin, daftar[i].nama);
      std::cout<<"Alamat\t: ";
      getline(std::cin, daftar[i].alamat);
      std::cout<<"No. HP\t: ";
      getline(std::cin, daftar[i].nohp);
   }
   
   std::cout<<"\nData yang dimasukkan:"<<std::endl;
   for (auto i {0}; i<n; i++) {
      std::cout<<std::setw(9)<<daftar[i].nama<<" | ";
      std::cout<<std::setw(20)<<daftar[i].alamat<<" | ";
      std::cout<<std::setw(12)<<daftar[i].nohp<<std::endl;
   }

   return 0;
}
