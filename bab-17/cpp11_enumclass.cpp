/******************************************************
Nama file: cpp11_enumclass.cpp
*******************************************************/

#include <iostream>

// enumerasi gaya C++11
enum class JenisKelamin {PRIA, WANITA};

class Siswa {
private:
   std::string nama;
   JenisKelamin gender;
public:
   void setNama(std::string nama) {
      this->nama = nama;
   }
  
   std::string getNama() {
      return nama;
   }
   
   void setGender(JenisKelamin gender) {
      this->gender = gender;
   }
   
   JenisKelamin getGender() {
      return gender;
   }
};

int main() {   
   std::string array[2] = {"Pria", "Wanita"};

   Siswa obj1, obj2;
  
   obj1.setNama(std::string("Dewi Puspita"));
   obj1.setGender(JenisKelamin::WANITA);

   obj2.setNama(std::string("Sandi Wijaya"));
   obj2.setGender(JenisKelamin::PRIA);
    
   std::cout<<"Siswa ke-1"<<std::endl;
   std::cout<<"Nama: "<<obj1.getNama()<<std::endl;
   std::cout<<"Jenis kelamin: "
            <<array[static_cast<int>(obj1.getGender())]
            <<std::endl;

   std::cout<<"\nSiswa ke-2"<<std::endl;
   std::cout<<"Nama: "<<obj2.getNama()<<std::endl;
   std::cout<<"Jenis kelamin: "
            <<array[static_cast<int>(obj2.getGender())]
            <<std::endl;

   return 0;
}
