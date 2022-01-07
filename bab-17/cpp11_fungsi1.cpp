/******************************************************
Nama file: cpp11_fungsi1.cpp
*******************************************************/

#include <iostream>

class Karyawan {
public:
   enum class TipeKaryawan {TETAP, KONTRAK};
   
   void setNip(std::string nip) {
      this->nip = nip;
   }
   
   auto getNip() -> std::string {
      return nip;
   }
   
   void setNama(std::string nama) {
      this->nama = nama;
   }
   
   auto getNama() -> std::string {
      return nama;
   }
   
   void setStatus(TipeKaryawan status) {
      this->status = status;
   }
   
   auto getStatus() -> TipeKaryawan {
      return status;
   }
private:
   std::string nip;
   std::string nama;
   TipeKaryawan status;  
};

int main() {
   Karyawan *k = new Karyawan();
   k->setNip("13100021201");
   k->setNama("Harun Wicaksono");
   k->setStatus(Karyawan::TipeKaryawan::TETAP);

   std::cout<< "NIP \t: "<<k->getNip()<<std::endl;
   std::cout<< "Nama \t: "<<k->getNama()<<std::endl;

   if (k->getStatus() == 
      Karyawan::TipeKaryawan::TETAP) {
      std::cout<<"Status \t: Karyawan Tetap";
   } else {
      std::cout<<"Status \t: Karyawan Kontrak";
   }

   delete k;

   return 0;
}
