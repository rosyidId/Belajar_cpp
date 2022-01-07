/******************************************************
Nama file: eksepsi12.cpp
*******************************************************/

#include <iostream>
#include <stdexcept>	// std::runtime_error

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
   double p, l, luas;
      
   // blok try-catch bagian luar
   try {
      // blok try-catch bagian dalam
      try {
         std::cout<<"Masukkan panjang: ";
         std::cin>>p;
         std::cout<<"Masukkan lebar: ";
         std::cin>>l;
         if (p <= 0 || l <= 0) {
            throw ValueError("Kesalahan: p dan l tidak boleh 0 atau negatif");
         }
      } catch (ValueError e) {
         std::cout<<e.what()<<std::endl;
         throw std::runtime_error("Program dihentikan");
      }
      luas = p * l;
      std::cout<<"Luas persegi panjang = "<<luas;
   } catch (std::runtime_error e) {
      std::cout<<e.what();
   }

   return 0;
}
