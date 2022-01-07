/******************************************************
Nama file: stl_list1.cpp
*******************************************************/

#include <iostream>
#include <list>		// std::list

int main() {   
   int a[] = {10,20,30,40,50};
   std::list<int> l(a, a + sizeof(a)/sizeof(int));
   
   // penelusuran maju
   std::cout<<"Penelusuran maju:"<<std::endl;   
   for (auto it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   std::cout<<"\n\nPenelusuran mundur:"<<std::endl;   
   for (auto it=l.rbegin(); it!=l.rend(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
