/******************************************************
Nama file: cpp17_inisialisasi_switch.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   std::string s;   
   
   switch (auto n{4}; n) {
      case 1: s = "Minggu"; break;
      case 2: s = "Senin"; break;
      case 3: s = "Selasa"; break;
      case 4: s = "Rabu"; break;
      case 5: s = "Kamis"; break;
      case 6: s = "Jumat"; break;
      case 7: s = "Sabtu"; break;
      default:
         s = "Tidak ada hari ke-" + std::to_string(n);
   }
   
   std::cout<<s;

   return 0;
}
