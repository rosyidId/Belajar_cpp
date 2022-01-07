/******************************************************
Nama file: eksepsi8.cpp
*******************************************************/

#include <iostream>

template <class T>
void lempar(T x) {
  try {
    if (x) {
      throw x;
    }
  }
  catch (int e) {
    std::cout<<"Menangkap eksepsi "
             <<"dengan tipe data int, yaitu: "
             <<e<<std::endl;
  }
  catch (double e) {
    std::cout<<"Menangkap eksepsi "
        <<"dengan tipe data double, yaitu: "
        <<e<<std::endl;
  }
  catch (char e) {
    std::cout<<"Menangkap eksepsi "
             <<"dengan tipe data char, yaitu: "
             <<e<<std::endl;
  }
  catch (char* e) {
    std::cout<<"Menangkap eksepsi "
             <<"dengan tipe data char*, yaitu: "
             <<e<<std::endl;
  }
}

int main() {   
   lempar(10);
   lempar(25.03);
   lempar('C');
   lempar((char *) "C++");

   return 0;
}
