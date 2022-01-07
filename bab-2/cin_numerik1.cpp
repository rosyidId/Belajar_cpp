/******************************************************
Nama file: cin_numerik1.cpp
*******************************************************/

#include <iostream>
#include <algorithm>  // std::max

int main() {   
   int a,b,c,maksimum;
   
   // menampilkan keterangan
   std::cout<<"Masukkan tiga bilangan bulat: ";
   // membaca tiga bilangan bulat dalam satu baris
   std::cin>>a>>b>>c;
   
   // mencari nilai maksimum
   maksimum = std::max(a,b);
   maksimum = std::max(maksimum,c);
      
   std::cout<<"Nilai maksimum adalah "
            <<maksimum<<std::endl;
   
   return 0;
}
