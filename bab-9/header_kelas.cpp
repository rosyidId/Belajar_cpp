/******************************************************
Nama file: header_kelas.cpp
*******************************************************/

#include <iostream>

#include "balok.h"

int main() {
   Balok obj;
   
   obj.setPanjang(6);
   obj.setLebar(4);
   obj.setTinggi(2);
   
   obj.cetakAtribut();
   obj.cetakVolume();
   
   return 0;
}

