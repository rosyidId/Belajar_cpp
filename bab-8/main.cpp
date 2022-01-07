/******************************************************
Nama file: main.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

#include "aritmetika.h"	// tambah(), kurang(), kali(), dan bagi()

int main() {
   double x, y;
   
   std::cout<<"Masukkan nilai x: ";
   std::cin>>x;
   std::cout<<"Masukkan nilai y: ";
   std::cin>>y;
      
   // memanggil fungsi tambah(), kurang(),
   // kali(), dan bagi()   
   std::cout<<std::fixed;
   std::cout<<x<<" + "<<y<<" = "<<tambah(x,y)<<std::endl;
   std::cout<<x<<" - "<<y<<" = "<<kurang(x,y)<<std::endl;
   std::cout<<x<<" x "<<y<<" = "<<kali(x,y)<<std::endl;
   std::cout<<x<<" / "<<y<<" = "<<bagi(x,y)<<std::endl;
   
   return 0;
}

