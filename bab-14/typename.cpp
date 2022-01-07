/******************************************************
Nama file: typename.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

// fungsi generik
template <typename T>
void cetak(T v) {
   std::cout<<v;
}

// kelas generik
template <typename T>
class Generik {
private:
   T data;
public:
   Generik(T data) {
      this->data = data;
   }
   
   void setData() {
      this->data = data;
   }
   
   T getData() {
      return data;
   }   
};

int main() {   
   // membuat objek dari kelas Generik
   // dengan data bertipe std::string
   Generik<std::string> obj1(std::string("Pemrograman C++"));
   
   // membuat objek dari kelas Generik
   // dengan data bertipe int
   Generik<int> obj2(17);   
   
   // memanggil fungsi cetak()
   cetak(obj1.getData());
   cetak(obj2.getData());

   return 0;
}
