/******************************************************
Nama file: eksepsi11.cpp
*******************************************************/

#include <iostream>
#include <typeinfo>	// operator typeid()

template <class T>
void lempar(T x) {
  try {
    if (x) {
      throw x;
    }
  } catch (int e) {
     std::cout<<"Menangkap eksepsi "
              <<"dengan tipe int: "
              <<e<<std::endl;  
  } catch (double e) {
     std::cout<<"Menangkap eksepsi "
              <<"dengan tipe double: "
              <<e<<std::endl;
  } catch (...) {
    std::cout<<"Menangkap eksepsi "
             <<"dengan tipe data lain ("
             <<typeid(x).name()
             <<"): "<<x<<std::endl;
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
