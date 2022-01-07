/******************************************************
Nama file: enumerasi3.cpp
*******************************************************/

#include <iostream>
#include <string>

const std::string HARI[] = {"Minggu","Senin","Selasa","Rabu",
                           "Kamis", "Jumat", "Sabtu"};

enum class Gender {Pria, Wanita};
enum class NamaHari {Minggu, Senin, Selasa, Rabu, Kamis, Jumat, Sabtu};

int main() {
   // deklarasi variabel
   std::string nama;
   Gender jenisKelamin;
   NamaHari hariLahir;
   
   // mengisi nilai ke dalam variabel
   nama = "Aria Wijaya";
   jenisKelamin = Gender::Wanita;
   hariLahir = NamaHari::Jumat;
   
   // menampilkan nilai
   std::cout<<"Nama\t\t: "
            <<nama<<std::endl;
   std::cout<<"Jenis kelamin\t: "
            <<((jenisKelamin == Gender::Pria) ? "Pria" : "Wanita")
            <<std::endl;
   std::cout<<"Hari lahir\t: "
            <<HARI[(int)hariLahir]<<std::endl;

   return 0;
}
