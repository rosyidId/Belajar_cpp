/******************************************************
Nama file: pointer_ke_pointer1.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcpy()

int main() {
   char **daftar;
   
   daftar = new char *[5];
   
   daftar[0] = new char[2];
   strcpy(daftar[0],"C");
   
   daftar[1] = new char[4];
   strcpy(daftar[1],"C++");
   
   daftar[2] = new char[3];
   strcpy(daftar[2],"C#");
   
   daftar[3] = new char[5];
   strcpy(daftar[3],"Java");
   
   daftar[4] = new char[7];
   strcpy(daftar[4],"Python");
   
   // menampilkan daftar string
   std::cout<<"Daftar bahasa pemrograman: "<<std::endl;
   for (auto i {0}; i<5; i++) {
      std::cout<<i+1<<". "<<daftar[i]<<std::endl;
      // membuang memori
      delete [] daftar[i];
   }
   
   delete [] daftar;
   
   return 0;
}
