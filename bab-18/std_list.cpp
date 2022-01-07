/******************************************************
Nama file: stl_list.cpp
*******************************************************/

#include <iostream>
#include <list>		// std::list

int main() {   
   int a[] = {10,20,30,40,50};
   std::list<int> l(a, a + sizeof(a)/sizeof(int));
   
   // penelusuran maju
   std::cout<<"Penelusuran maju:"<<std::endl;
   std::list<int>::iterator it;
   for (it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   std::cout<<"\n\nPenelusuran mundur:"<<std::endl;
   std::list<int>::reverse_iterator it1;
   for (it1=l.rbegin(); it1!=l.rend(); ++it1) {
      std::cout<<*it1<<" ";
   }
   
   return 0;
}
