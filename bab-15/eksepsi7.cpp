/******************************************************
Nama file: eksepsi7.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

// mendefinisikan kelas eksepsi
class ValueError {
private:
   std::string message;
public:
   // konstruktor
   ValueError(std::string message="") {
      this->message = message;
   }
   
   std::string what() const {
      return message;
   }
};

int main() {   
   std::string nama;
   double berat;
   
   std::cout<<"Masukkan nama: ";
   getline(std::cin, nama);
   std::cout<<"Masukkan berat badan: ";
   std::cin>>berat;
   
   try {
      if (berat <= 0) {
         throw ValueError("Berat tidak boleh 0 atau negatif");
      }
      std::cout<<nama<<" ("<<berat<<" kg)";
   } catch (ValueError e) {
      std::cout<<e.what();
   }

   return 0;
}
