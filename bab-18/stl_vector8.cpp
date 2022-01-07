/******************************************************
Nama file: stl_vector8.cpp
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
   
   // menghapus dua elemen
   std::vector<int>::iterator itr = v.begin();
   itr = v.erase(itr+1);	// menghapus 20
   v.erase(itr+1);	// menghapus 40
      
   // menampilkan elemen-elemen vector setelah dihapus
   std::cout<<"\n\nSetelah dihapus:"<<std::endl;   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
