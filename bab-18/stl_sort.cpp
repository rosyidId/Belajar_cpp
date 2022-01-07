/******************************************************
Nama file: stl_sort.cpp
*******************************************************/

#include <iostream>
#include <vector>		// std::vector
#include <algorithm>	// std::sort()

int main() {   
   std::vector<std::string> v = {"C++","C","Ruby","Java","Python"};
   
   std::cout<<"Sebelum diurutkan:"<<std::endl;
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<std::endl;
   }
   
   // mengurutkan elemen-elemen vector
   std::sort(v.begin(), v.end());
   
   std::cout<<"\nSetelah diurutkan:"<<std::endl;
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<std::endl;
   }
   
   return 0;
}
