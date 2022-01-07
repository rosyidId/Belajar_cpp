/******************************************************
Nama file: stl_deque1.cpp
*******************************************************/

#include <iostream>
#include <deque>	// std::deque

int main() {   
   std::deque<int> d = {10,20,30,40,50};
   
   std::cout<<"Penelusuran maju:"<<std::endl;
   std::deque<int>::iterator it;
   for (it=d.begin(); it!=d.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   std::cout<<"\n\nPenelusuran mundur:"<<std::endl;
   std::deque<int>::reverse_iterator it1;
   for (it1=d.rbegin(); it1!=d.rend(); ++it1) {
      std::cout<<*it1<<" ";
   }
   
   return 0;
}
