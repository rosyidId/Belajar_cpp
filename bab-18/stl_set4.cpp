/******************************************************
Nama file: stl_set4.cpp
*******************************************************/

#include <iostream>
#include <set>		// std::set

int main() {   
   std::set<int> s = {10,20,30,40,50};
   
   std::cout<<"Sebelum dihapus:"<<std::endl;   
   for (auto it=s.begin(); it!=s.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menghapus dua elemen
   s.erase(20);		// menghapus 20
   s.erase(40);		// menghapus 40
   
   std::cout<<"\n\nSetelah dihapus:"<<std::endl;   
   for (auto it=s.begin(); it!=s.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
