/******************************************************
Nama file: stl_vector.cpp
*******************************************************/

#include <iostream>
#include <vector>	// std::vector

int main() {   
   std::vector<int> v(5, 0);
   
   // menampilkan nilai awal pada elemen-elemen vector
   std::cout<<"Keadaan awal ("
            <<v.size()<<" elemen)"
            <<std::endl;
   for (size_t i=0; i<v.size(); i++) {
      std::cout<<v[i]<<" ";
   }
   
   // menambah dua elemen baru
   v.push_back(10);
   v.push_back(20);
   
   std::cout<<"\n\nKeadaan akhir ("
            <<v.size()<<" elemen)"
            <<std::endl;
   for (size_t i=0; i<v.size(); i++) {
      std::cout<<v[i]<<" ";
   }
   
   return 0;
}
