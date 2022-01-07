/******************************************************
Nama file: stl_deque.cpp
*******************************************************/

#include <iostream>
#include <deque>	// std::deque

int main() {   
   std::deque<int> d(5);
   
   std::cout<<"d.size(): "<<d.size()<<std::endl;
   
   // menentukan nilai elemen-elemen deque
   for (size_t i=0; i<d.size(); i++) {
      d[i] = (i+1) * 10;
   }  
   
   // menampilkan elemen-elemen deque
   std::cout<<"Isi d: ";
   for (size_t i=0; i<d.size(); i++) {
      std::cout<<d[i]<<" ";
   }
   
   return 0;
}
