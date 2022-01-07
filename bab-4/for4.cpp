/******************************************************
Nama file: for4.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

const int N = 5;

int main() {   
   int data[] = {10,20,30,40,50};
   int jumlah {0};
   float rataRata {0.0F};

   std::cout<<"[";
   for (auto i {0}; i<N; jumlah += data[i], i++) {
      std::cout<<data[i];
      if (i<N-1) std::cout<<", ";
   }
   std::cout<<"]"<<std::endl;
   
   rataRata = jumlah / N;
   
   std::cout<<std::fixed;
   std::cout<<"\nJumlah total \t= "<<jumlah<<std::endl;
   std::cout<<"Rata-rata \t= "<<rataRata<<std::endl;
   
   return 0; 
}
