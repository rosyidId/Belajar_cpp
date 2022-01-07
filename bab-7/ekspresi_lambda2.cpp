/******************************************************
Nama file: ekspresi_lambda2.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed
#include <vector>	// std::vector
#include <iterator>	// std::begin() dan std::end()

int main() {
   std::vector<int> data {10, 20, 30, 40, 50};
   
   // mendefinisikan ekspresi lambda dengan nama avg()
   auto avg = [] (std::vector<int> v) -> double { 
      int jumlah {0};      
      for (auto e: v) { jumlah += e; }
      return (double) jumlah / v.size();
   };
   
   std::cout<<std::fixed;
   std::cout<<"Rata-rata: "<<avg(data)<<std::endl;
      
   return 0;
}
