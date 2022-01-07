/******************************************************
Nama file: tipe_bilangan_bulat.cpp
*******************************************************/

#include <iostream>
#include <climits>

int main()
{
   char c1;
   unsigned char c2;

   int i1;
   unsigned int i2;

   std::cout << "Tipe char:" << std::endl;
   std::cout << "Nilai minimum: " << CHAR_MIN << std::endl;
   std::cout << "Nilai maksimum: " << CHAR_MAX << std::endl;
   std::cout << "Ukuran: " << (int)sizeof(c1)
             << " byte" << std::endl;

   std::cout << "\nTipe unsigned char:" << std::endl;
   std::cout << "Nilai minimum: " << 0 << std::endl;
   std::cout << "Nilai maksimum: " << UCHAR_MAX << std::endl;
   std::cout << "Ukuran: " << (int)sizeof(c2)
             << " byte" << std::endl;

   std::cout << "\nTipe int:" << std::endl;
   std::cout << "Nilai minimum: " << INT_MIN << std::endl;
   std::cout << "Nilai maksimum: " << INT_MAX << std::endl;
   std::cout << "Ukuran: " << (int)sizeof(i1)
             << " byte" << std::endl;

   std::cout << "\nTipe unsigned int:" << std::endl;
   std::cout << "Nilai minimum: " << 0 << std::endl;
   std::cout << "Nilai maksimum: " << UINT_MAX << std::endl;
   std::cout << "Ukuran: " << (int)sizeof(i2)
             << " byte" << std::endl;

   return 0;
}
