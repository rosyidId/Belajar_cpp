/******************************************************
Nama file: struktur_array.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

using kontak = struct {
   std::string nama;
   std::string alamat;
   std::string nohp[3];
};

int main() {
   // variabel bertipe struktur
   kontak k;
   
   // mengisi nilai ke dalam variabel k
   k.nama = "Adam";
   k.alamat = "Jl ABC 777 Bandung";
   k.nohp[0] = "08192177777";
   k.nohp[1] = "08152266666";
   k.nohp[2] = "08122355555";
      
   // menampilkan nilai
   std::cout<<"Nama\t: "<<k.nama<<std::endl;
   std::cout<<"Alamat\t: "<<k.alamat<<std::endl;
   std::cout<<"No. HP\t: ";
   for (auto i {0}; i<3; i++) {
      std::cout<<k.nohp[i];
      if (i<2) std::cout<<", ";      
   }

   return 0;
}
