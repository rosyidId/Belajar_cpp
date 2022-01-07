
#include <stdio.h>
#include <iostream>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};
enum waktu {wita};

void hello() 
{ 
    enum hari sekarang;
    enum waktu add;
    sekarang = RABU;
    std::cout << "hari rabo adalah ";
    std::cout << " hari ke-" << sekarang + 1;
    std::cout << " dan waktu sekarang adalah " << add <<std::endl;

}
void selamat(){

    enum hari kemarin;
    kemarin = RABU;
    std::cout << "hari rabo adalah"; 
    std::cout << " hari ke-" <<kemarin << std::endl;
}
int main(){

    std::cout << std::endl;
    std::cout << "HASILNYA" << std::endl;
    std::cout << std::endl;
    
    
    hello();

    //memanggil fungsi lain
    selamat();

    std::cout << std::endl;

    return 0;

    
}