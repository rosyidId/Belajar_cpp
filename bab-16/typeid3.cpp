/******************************************************
Nama file: typeid3.cpp
*******************************************************/

#include <iostream>
#include <typeinfo>	// typeid
#include <string>	// std::string

class DuaDimensi {
public:
   // fungsi virtual
   virtual double luas() = 0;
   
   // fungsi non-virtual
   void cetakLuas(std::string namaBangun) {
      std::cout<<"Luas "
               <<namaBangun<<" = "
               <<luas()		// memanggil fungsi luas()
               <<std::endl;
   }
};

class PersegiPanjang: public DuaDimensi {
private:
   double panjang;
   double lebar;
public:
   PersegiPanjang() = default;
   PersegiPanjang(double p, double l):
      panjang(p), lebar(l) {}
   
   void setPanjang(double p) {
      panjang = p;
   }
   
   double getPanjang() {
      return panjang;
   }
   
   void setLebar(double l) {
      lebar = l;
   }
   
   double getLebar() {
      return lebar;
   }
   
   double luas() override {
      return panjang * lebar;
   }
};

class BujurSangkar: public DuaDimensi {
private:
   double sisi;
public:
   BujurSangkar() = default;
   BujurSangkar(double s): sisi(s) {}
   
   void setSisi(double s) {
      sisi = s;
   }
   
   double getSisi() {
      return sisi;
   }
   
   double luas() override {
      return sisi * sisi;
   }
};

class Segitiga: public DuaDimensi {
private:
   double alas;
   double tinggi;
public:
   Segitiga() = default;
   Segitiga(double a, double t):
      alas(a), tinggi(t) {}
   
   void setAlas(double a) {
      alas = a;
   }
   
   double getAlas() {
      return alas;
   }
   
   void setTinggi(double t) {
      tinggi = t;
   }
   
   double getTinggi() {
      return tinggi;
   }
   
   double luas() override {
      return alas * tinggi / 2;
   }
};

class Lingkaran: public DuaDimensi {
private:
   double jariJari;
public:
   Lingkaran() = default;
   Lingkaran(double r): jariJari(r) {}
   
   void setJariJari(double r) {
      jariJari = r;
   }
   
   double getJariJari() {
      return jariJari;
   }
   
   double luas() override {
      return 3.14159 * jariJari * jariJari;
   }
};

// mendefinisikan fungsi dengan parameter
// bertipe referensi ke tipe DuaDimensi
void cetakTipe(DuaDimensi& obj) {
   std::cout<<"obj sedang mengacu ke objek bertipe: "
            <<typeid(obj).name() // parameter untuk typeid bertipe referensi
            <<std::endl;
}

int main() {   
   // mendeklarasikan objek dari kelas PersegiPanjang,
   // BujurSangkar, Segitiga, dan Lingkaran
   PersegiPanjang pp;
   BujurSangkar bs;
   Segitiga st;
   Lingkaran lk;
   
   // memanggil fungsi cetakTipe()
   cetakTipe(pp);
   cetakTipe(bs);
   cetakTipe(st);
   cetakTipe(lk);

   return 0;
}
