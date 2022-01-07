/******************************************************
Nama file: stl_vector2.cpp
*******************************************************/

#include <iostream>
#include <vector>	// std::vector

int main() {   
   std::vector<int> v = {10,20,30,40,50};
   
   // menampilkan elemen pertama sampai elemen terakhir
   std::cout<<"Penelusuran maju:"<<std::endl;
   std::vector<int>::iterator it;
   for (it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menampilkan elemen terakhir sampai elemen pertama
   std::cout<<"\n\nPenelusuran mundur:"<<std::endl;
   std::vector<int>::reverse_iterator it1;
   for (it1=v.rbegin(); it1!=v.rend(); ++it1) {
      std::cout<<*it1<<" ";
   }
   
   return 0;
}
