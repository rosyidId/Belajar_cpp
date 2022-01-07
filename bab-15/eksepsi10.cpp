/******************************************************
Nama file: eksepsi10.cpp
*******************************************************/

#include <iostream>
#include <typeinfo>	// operator typeid()

template <class T>
void lempar(T x) {
  try {
    if (x) {
      throw x;
    }
  }
  catch (...) {
    std::cout<<"Menangkap eksepsi "
             <<"dengan tipe data "
             <<typeid(x).name()
             <<": "<<x<<std::endl;
  }
}

int main() {   
   // melempar eksepsi dengan tipe berbeda
   lempar(10);
   lempar(25.03);
   lempar('C');
   lempar((char *) "C++");

   return 0;
}
