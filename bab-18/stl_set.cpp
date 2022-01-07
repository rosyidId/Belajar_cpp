/******************************************************
Nama file: stl_set.cpp
*******************************************************/

#include <iostream>
#include <set>		// std::set

int main() {   
   std::set<int> s = {10,20,30,40,50};
   
   std::cout<<"Penelusuran maju:"<<std::endl;   
   for (auto it=s.begin(); it!=s.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   std::cout<<"\n\nPenelusuran mundur:"<<std::endl;   
   for (auto it=s.rbegin(); it!=s.rend(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
