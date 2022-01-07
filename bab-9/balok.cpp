/******************************************************
Nama file: balok.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

#include "balok.h"

Balok::Balok(double panjang, double lebar, double tinggi) {
   this->panjang = panjang;
   this->lebar = lebar;
   this->tinggi = tinggi;
}

double Balok::volume() {
   return panjang * lebar * tinggi;
}

void Balok::setPanjang(double panjang) {
   this->panjang = panjang;
}

double Balok::getPanjang() {
   return panjang;
}

void Balok::setLebar(double lebar) {
   this->lebar = lebar;
}

double Balok::getLebar() {
   return lebar;
}

void Balok::setTinggi(double tinggi) {
   this->tinggi = tinggi;
}

double Balok::getTinggi() {
   return tinggi;
}

void Balok::cetakAtribut() {
   std::cout<<std::fixed;
   std::cout<<"panjang\t\t: "<<panjang<<std::endl;
   std::cout<<"lebar\t\t: "<<lebar<<std::endl;
   std::cout<<"tinggi\t\t: "<<tinggi<<std::endl;
}

void Balok::cetakVolume() {
   std::cout<<std::fixed;
   std::cout<<"Volume balok \t= "
            <<volume()
            <<std::endl;
}
