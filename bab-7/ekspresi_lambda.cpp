/******************************************************
Nama file: ekspresi_lambda.cpp
*******************************************************/

#include <iostream>
#include <iomanip>

int main() {
   double d1 {5.0}, d2{6.0};
   double volume1 {0.0}, volume2 {0.0};
   
   volume1 = [] (double a) -> double { return a*a*a; }(d1);
   volume2 = [] (double a) { return a*a*a; }(d2);
   
   std::cout<<std::fixed;
   std::cout<<"volume1: "<<volume1<<std::endl;
   std::cout<<"volume2: "<<volume2<<std::endl;
      
   return 0;
}
