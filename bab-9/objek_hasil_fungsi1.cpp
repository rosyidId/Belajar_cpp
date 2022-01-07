/******************************************************
Nama file: objek_hasil_fungsi1.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <cctype>	// toupper() dan tolower()

class Teks {
private:
   std::string teks;
public:
   Teks() = default;
   Teks(std::string teks) {
      this->teks = teks;
   }
   
   void setTeks(std::string teks) {
      this->teks = teks;
   }
   
   std::string getTeks() {
      return teks;
   }
   
   Teks upper() {
      std::string s;
      for (size_t i {0}; i<teks.length(); i++) {
	     s += toupper(teks[i]);
	  }
	  Teks hasil(s);
	  return hasil;  // mengembalikan objek dari kelas Teks
   }
   
   Teks lower() {
      std::string s;
      for (size_t i {0}; i<teks.length(); i++) {
	     s += tolower(teks[i]);
	  }
	  Teks hasil(s);
	  return hasil;  // mengembalikan objek dari kelas Teks
   }

};

int main() {
   Teks s1("Muhammad Adam");
   Teks s2, s3;
   
   s2 = s1.upper();
   s3 = s1.lower();
   
   // menampilkan teks
   std::cout<<"s1: "<<s1.getTeks()<<std::endl;
   std::cout<<"s2: "<<s2.getTeks()<<std::endl;
   std::cout<<"s3: "<<s3.getTeks()<<std::endl;
      
   return 0;
}

