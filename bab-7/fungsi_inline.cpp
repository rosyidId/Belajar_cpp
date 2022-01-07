/******************************************************
Nama file: fungsi_inline.cpp
*******************************************************/

#include <iostream>

// mendefinisikan fungsi inline
inline double maksimum(double a, double b) {
   return (a>b) ? a : b;
}

int main() {
   double x, y;
   
   std::cout<<"Masukkan nilai x: ";
   std::cin>>x;
   std::cout<<"Masukkan nilai y: ";
   std::cin>>y;
   
   std::cout<<"\nNilai maksimum: "
            <<maksimum(x,y);
   
   return 0;
}
