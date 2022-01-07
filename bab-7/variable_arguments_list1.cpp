/******************************************************
Nama file: variable_arguments_list1.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <cstdarg>	// va_list, va_start(), va_arg(), dan va_end()

void cetakString(int n, ...) {
   va_list vl;   
   va_start(vl, n);
   
   std::cout<<"[";
   for (auto i {0}; i<n; i++) {
      std::cout<<"\""
               <<va_arg(vl, std::string)
               <<"\"";
      if (i < n-1) std::cout<<", ";
   }
   std::cout<<"]"<<std::endl;
   
   va_end(vl);   
}

int main() {
   // memanggil fungsi dengan dua parameter dinamis
   std::cout<<"Dua parameter:"<<std::endl;
   cetakString(2, std::string("C"), 
                  std::string("C++"));
   
   // memanggil fungsi dengan tiga parameter dinamis
   std::cout<<"\nTiga parameter:"<<std::endl;
   cetakString(3, std::string("C"), 
                  std::string("C++"), 
                  std::string("Java"));
   
   // memanggil fungsi dengan empat parameter dinamis
   std::cout<<"\nEmpat parameter:"<<std::endl;
   cetakString(4, std::string("C"), 
                  std::string("C++"), 
                  std::string("Java"), 
                  std::string("Python"));
   
   return 0;
}
