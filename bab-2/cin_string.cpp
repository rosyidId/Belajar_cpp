/******************************************************
Nama file: cin_string.cpp
*******************************************************/

#include <iostream>
#include <string>


int main() {   
   std::string nama,alamat,tempat,pwd;
   
   std::cout<<"Masukkan nama: ";
   // membaca string
   getline(std::cin,nama);
   std::cout<<"masukkan alamat: ";
   // membaca string
   getline(std::cin,alamat);
   std::cout<<"Masukkan tempat lahir: ";
   // membaca string
   getline(std::cin,tempat);

   std::cout << std::endl;

   std::cout << "=====================" << std::endl; 
   std::cout << "       DATA SAYA     " << std::endl; 
   std::cout << "=====================" << std::endl; 

   std::cout << std::endl;

   std::cout << "nama saya adalah " << nama << " alamat saya adalah " << alamat <<" tempat lahir "<< tempat << std::endl;

   std::cout << std::endl;
   
   return 0;
}
