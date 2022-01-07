/******************************************************
Nama file: mutable1.cpp
*******************************************************/

#include <iostream>
#include <string>
#include <iomanip>

class Karyawan {
private:
   std::string nip;
   std::string nama;
   mutable double gaji;
public:
   Karyawan(std::string nip, std::string nama, double gaji) {
      this->nip = nip;
      this->nama = nama;
      this->gaji = gaji;
   }     
  
   std::string getNip() const {
      return nip;
   }  
  
   std::string getNama() const {
      return nama;
   }
  
   void setGaji(double gaji) const {
      this->gaji = gaji;
   }
  
   double getGaji() const {
      return gaji;
   }
};

int main() {   
   Karyawan *obj;
	
   obj = new Karyawan(
      std::string("12345"),
      std::string("Dewo"),
      9000000.0
   );
   
   std::cout<<"Sebelum diubah"<<std::endl;
   std::cout<<"NIP   : "<<obj->getNip()<<std::endl;
   std::cout<<"Nama  : "<<obj->getNama()<<std::endl;
   std::cout<<"Gaji  : "<<std::setprecision(8)
            <<obj->getGaji()
            <<std::endl;
            
   // mengubah gaji
   obj->setGaji(12000000.0);
   
   std::cout<<"\nSetelah diubah"<<std::endl;
   std::cout<<"NIP   : "<<obj->getNip()<<std::endl;
   std::cout<<"Nama  : "<<obj->getNama()<<std::endl;
   std::cout<<"Gaji  : "<<std::setprecision(8)
            <<obj->getGaji();

   return 0;
}
