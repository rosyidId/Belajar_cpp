/******************************************************
Nama file: for1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

int main() {   
   int n;
   double x, jumlah {0.0};
   double rataRata {0.0};

   std::cout<<"Masukkan banyaknya data: ";
   std::cin>>n;

   for (auto i {0}; i<n; i++) {
      std::cout<<"Data ke-"<<i+1<<": ";
      std::cin>>x;
      jumlah += x;
   }
  
   rataRata = jumlah / n;
   
   std::cout<<std::fixed;
   std::cout<<"\nRata-rata = "<<rataRata<<std::endl;
   
   return 0; 
}
