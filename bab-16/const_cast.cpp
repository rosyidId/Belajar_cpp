/******************************************************
Nama file: const_cast.cpp
*******************************************************/

#include <iostream>

void kuadrat(const int *x) {
   int *p;

   // melakukan typecasting terhadap x
   p = const_cast<int *> (x);

   // melakukan perkalian nilai
   *p = (*x) * (*x);
}

int main() {
   // mendeklarasikan variabel a 
   // yang bertipe int
   // dan mengisinya dengan nilai 5
   int a = 5;

   // memanggil nilai a
   std::cout<<"Nilai a awal\t: "<<a<<std::endl;

   // memanggil fungsi kuadrat()
   // dengan alamat a 
   // sebagai parameternya
   kuadrat(&a);

   // memanggil kembali nilai a
   std::cout<<"Nilai a akhir\t: "<<a<<std::endl;

   return 0;
}
