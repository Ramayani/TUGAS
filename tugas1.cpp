#include <iostream>
using namespace std;

int main() {
    
    int angka, hasil;
    
    //meminta user memasukkan 4 digit angka
    cout<<"masukkan 4 digit angka : ";
     cin>> angka;
    
    //menambahkan 8 ke angka tersebut
    angka +=8;
    
    //membagi angka tersebut dengan 3
    angka /=3;
    
    //mengambil modulo angka tersebut dengan 5
    hasil = angka % 5;
    
    //mengalikan hasilnya dengan 5
    hasil *= 5;
    
    cout<<"hasil akhir : " << hasil << endl; 
    return 0;
}


