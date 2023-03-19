#include <iostream>
using namespace std;

int main() {
    
    int num;      //var num untuk menyimpan angka yang ingin dimasukkan
    int sum = 0;  //var sum bernilai 0 untuk menyimpan jumlah digit dalam angka yang dimasukkan
    
    cout<< "masukkan 4 digit angka: ";
     cin>> num;
    
    while (num !=0) {        //ketika num tidak sama dengan 0 maka
           sum += num % 10;  //tambahkan digit terakhir ke sum
           num /= 10;        //hilangkan digit terakhir dari num 
    }
          
    cout<< "jumlah digit adalah: " << sum << endl;
    
    return 0;
}




