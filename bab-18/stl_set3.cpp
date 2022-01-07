/******************************************************
Nama file: stl_set3.cpp
*******************************************************/

#include <iostream>
#include <set>		// std::set
#include <iterator>	// std::advance()

int main() {   
   std::set<int> s = {10,20,30,40,50};
   
   std::cout<<"Sebelum dihapus:"<<std::endl;   
   for (auto it=s.begin(); it!=s.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menghapus dua elemen
   std::set<int>::iterator itr = s.begin();
   itr++;	// iterator menunjuk ke alamat dari elemen kedua
   s.erase(itr);	// menghapus 20
   std::advance(itr,1);  // menaikkan iterator 1 langkah
   s.erase(itr);	// menghapus 40
   
   std::cout<<"\n\nSetelah dihapus:"<<std::endl;   
   for (auto it=s.begin(); it!=s.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
