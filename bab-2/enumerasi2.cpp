/******************************************************
Nama file: enumerasi2.cpp
*******************************************************/

#include <iostream>
#include <string>

const std::string HARI[] = {"Minggu","Senin","Selasa","Rabu",
                          "Kamis", "Jumat", "Sabtu"};

enum Gender {Pria, Wanita};
enum NamaHari {Minggu, Senin, Selasa, Rabu, Kamis, Jumat, Sabtu};

int main() {
   // deklarasi variabel
   std::string nama;
   Gender jenisKelamin;
   NamaHari hariLahir;
   
   // mengisi nilai ke dalam variabel
   nama = "Aria Wijaya";
   jenisKelamin = Pria;
   hariLahir = Jumat;
   
   // menampilkan nilai
   std::cout<<"Nama\t\t: "
            <<nama<<std::endl;
   std::cout<<"Jenis kelamin\t: "
            <<((jenisKelamin == Pria) ? "Pria" : "Wanita")
            <<std::endl;
   std::cout<<"Hari lahir\t: "
            <<HARI[hariLahir]<<std::endl;

   return 0;
}
