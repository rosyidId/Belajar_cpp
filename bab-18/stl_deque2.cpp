/******************************************************
Nama file: stl_deque2.cpp
*******************************************************/

#include <iostream>
#include <deque>	// std::deque

int main() {   
   std::deque<int> d;
   
   // menambah 5 elemen ke dalam deque
   for (size_t i=0; i<5; i++) {
      d.push_back((i+1) * 10);
   }
   
   std::deque<int>::iterator it;
   for (it=d.begin(); it!=d.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
