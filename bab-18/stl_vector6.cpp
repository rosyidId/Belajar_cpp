/******************************************************
Nama file: stl_vector6.cpp
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
   v.pop_back();
   v.pop_back();
      
   // menampilkan elemen-elemen vector setelah dihapus
   std::cout<<"\n\nSetelah dihapus:"<<std::endl;   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
