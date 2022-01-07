/******************************************************
Nama file: cin_karakter.cpp
*******************************************************/

#include <iostream>
//#include <cstdio>  // jika ingin menggunakan printf()

int main() {   
   char c1,c2,c3;
   
   std::cout<<"Masukkan karakter: ";
   // membaca karakter
   std::cin>>c1;

   std::cout << std::endl;
   
   std::cout<<"Anda telah memasukkan karakter '"
            <<c1<<"'"<<std::endl;
   
   std::cout<<std::endl;
   std::cout<<"Masukkan dua karakter: ";
   // membaca dua karakter
   std::cin>>c2>>c3;

   std::cout << std::endl;
      
   std::cout<<"Kode ASCII untuk karakter '"
            <<c2<<"' dan '"<<c3<<"' adalah "
            <<(int) c2<<" dan "<<(int) c3<<std::endl;
   
   //printf("Kode ASCII untuk karakter '%c' dan '%c' adalah %d dan %d",
   //       c2, c3, c2, c3);
   
   return 0;
}
