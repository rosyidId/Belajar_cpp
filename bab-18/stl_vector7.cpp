/******************************************************
Nama file: stl_vector7.cpp
*******************************************************/

#include <iostream>
#include <vector>	// std::vector

int main() {   
   std::vector<int> v = {10,20,30,40,50};
   
   // menampilkan elemen-elemen vector sebelum dihapus
   std::cout<<"Sebelum dihapus:"<<std::endl;   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // mengambil dua elemen terakhir
   int a = v.back();
   v.pop_back();   
   int b = v.back();
   v.pop_back();
   
   std::cout<<"\n\nNilai a: "<<a<<std::endl;
   std::cout<<"Nilai b: "<<b<<std::endl;
      
   // menampilkan elemen-elemen vector setelah dihapus
   std::cout<<"\nSetelah dihapus:"<<std::endl;   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
