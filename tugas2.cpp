#include <iostream>
using namespace std;

int main() {
    
  int n;
   cout << "Masukkan angka 6 digit: ";
    cin >> n;         //variabel n untuk menyimpan angka yang ingin dimasukkan
     int result = 0;   //memberi nilai variabel result dengan 0
      int digit = 1;    //memberi nilai variabel didgit dengan 1

  while (n > 0) {                 //menggunakan while loop untuk memproses setiap digit yang dimasukkan oleh user
    int current_digit = n % 10;   //mengambil modulo dari digit saat ini 
        current_digit += 2;       //tambahkan digit saat ini dengan 2
  if (current_digit > 9) {        //jika digit saat ini > 9
      current_digit -= 10;        //maka digit saat ini - 10 untuk mendapatkan digit yang tepat
    }
    result += current_digit * digit;  //tambahkan digit saat ini ke result
     digit *= 10;                     //memperbarui nilai digit 
         n /= 10;                     //hasil n dibagi dengan 10 untuk mendapatkan hasil digit yang tepat
  }

  cout << "Angka yang ditampilkan: " << result << endl; //menampilkan hasil angka yang dihasilkan ke dalam var result
  
  return 0;
}
 


