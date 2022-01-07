/******************************************************
Nama file: typeid.cpp
*******************************************************/

#include <iostream>
#include <typeinfo>	// typeid
#include <string>	// std::string

class Titik {
private:
   int x;
   int y;
public:
   Titik() = default;
   Titik(int x, int y): x(x), y(y) {}
   
   void setX(int x) {
      this->x = x;
   }
   
   int getX() {
      return x;
   }
   
   void setY(int y) {
      this->y = y;
   }
   
   int getY() {
      return y;
   }
   
   void cetak(std::string nama) {
      std::cout<<nama<<"("<<x<<","<<y<<")"<<std::endl;
   }
};

class Garis {
private:
   Titik t1;
   Titik t2;
public:
   Garis() = default;
   Garis(Titik t1, Titik t2) {
      this->t1.setX(t1.getX());
      this->t1.setY(t1.getY());
      this->t2.setX(t2.getX());
      this->t2.setY(t2.getY());
   }
   
   void setT1(Titik t1) {
      this->t1.setX(t1.getX());
      this->t1.setY(t1.getY());
   }
   
   Titik getT1() {
      return t1;
   }
   
   void setT2(Titik t2) {
      this->t2.setX(t2.getX());
      this->t2.setY(t2.getY());
   }
   
   Titik getT2() {
      return t2;
   }   
};

int main() {
   // mendeklarasikan variabel 
   // dengan tipe dasar
   int x;
   float y;
   char c;
   char* str;

   // mendeklarasikan objek 
   // yang bertipe kelas
   Titik t;
   Garis g;
   
   // mendapatkan tipe masing-masing variabel/objek 
   // pada saat run-time
   std::cout<<"Tipe dari variabel x adalah: "
            <<typeid(x).name();
   std::cout<<std::endl;
   std::cout<<"Tipe dari variabel y adalah: "
            <<typeid(y).name();
   std::cout<<std::endl;
   std::cout<<"Tipe dari variabel c adalah: "
            <<typeid(c).name();
   std::cout<<std::endl;
   std::cout<<"Tipe dari variabel str adalah: "
            <<typeid(str).name();
   std::cout<<std::endl<<std::endl;

   std::cout<<"t merupakan objek yang bertipe: "
            <<typeid(t).name();
   std::cout<<std::endl;
   std::cout<<"g merupakan objek yang bertipe: "
            <<typeid(g).name();

   return 0;
}
