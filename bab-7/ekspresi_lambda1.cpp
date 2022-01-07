/******************************************************
Nama file: ekspresi_lambda1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>

int main() {
   double d1 {5.0}, d2{6.0};
   double volume1 {0.0}, volume2 {0.0};
   
   // mendefinisikan ekspresi lambda dengan nama hitungVolume()
   auto hitungVolume = [] (double a) -> double { return a*a*a; };
   
   // mengeksekusi ekspresi lambda
   volume1 = hitungVolume(d1);
   volume2 = hitungVolume(d2);
   
   std::cout<<std::fixed;
   std::cout<<"volume1: "<<volume1<<std::endl;
   std::cout<<"volume2: "<<volume2<<std::endl;
      
   return 0;
}
