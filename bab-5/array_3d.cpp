/******************************************************
Nama file: array_3d.cpp
*******************************************************/

#include <iostream>

int main() {
   int a[2][3][3] {
                  {
                    {1,0,3},
                    {4,-1,2},
                    {8,2,1}
                  },
                  {
                    {6,8,3},
                    {4,3,6},
                    {5,9,2}
                  }
               };

   // menampilkan nilai elemen array
   for (auto halaman {0}; halaman<2; halaman++) {
      std::cout<<"Halaman ke-"<<halaman+1<<std::endl;
      for (auto baris {0}; baris<3; baris++) {
         for (auto kolom {0}; kolom<3; kolom++) {          
            std::cout<<a[halaman][baris][kolom]<<" ";
         }
         std::cout<<std::endl;
      }
      std::cout<<std::endl;
   }
   
   std::cout<<"Elemen A[1][1][2] bernilai: "
            <<a[1][1][2];

   return 0;
}
