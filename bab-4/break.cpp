/******************************************************
Nama file: break.cpp
*******************************************************/

#include <iostream>

int main() {   
   for (auto i {0}; i<10; i++) 
   {      
      std::cout<< i <<" "<<std::endl;
      if (i == 4) 
      break;
   }
   
   return 0; 
}
