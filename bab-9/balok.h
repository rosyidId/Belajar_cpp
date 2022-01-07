#ifndef _BALOK_H_
#define _BALOK_H_

/******************************************************
Nama file: balok.h
*******************************************************/

class Balok {
private:
   double panjang;
   double lebar;
   double tinggi;   
   double volume();
public:
   Balok() = default;
   Balok(double panjang, double lebar, double tinggi);   
   void setPanjang(double panjang);
   double getPanjang();
   void setLebar(double lebar);
   double getLebar();
   void setTinggi(double tinggi);
   double getTinggi();
   void cetakAtribut();
   void cetakVolume();
};

#endif	// _BALOK_H_
