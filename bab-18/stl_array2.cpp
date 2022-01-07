/******************************************************
Nama file: stl_array2.cpp
*******************************************************/

#include <iostream>
#include <array>	// std::array

int main() {   
   std::array<int, 5> a = {10,20,30,40,50};
   
   // menelusuri isi kontainer dari depan ke belakang
   std::cout<<"Penelusuran dengan arah maju:"<<std::endl;
   std::array<int,5>::iterator it = a.begin();
   while (it != a.end()) {
      std::cout<<*it<<" ";
      it++;
   }
   
   std::cout<<"\n\nPenelusuran dengan arah mundur:"<<std::endl;
   std::array<int,5>::reverse_iterator it1 = a.rbegin();
   while (it1 != a.rend()) {
      std::cout<<*it1<<" ";
      it1++;
   }
   
   return 0;
}
