#include <iostream>
#include <string>

using namespace std;

 string detikKeWaktu(int detik) {  //mengkonversi waktu dari detik menjadi jam,menit dan detik
    int jam, menit, sisaDetik;
    string waktu;

    jam = detik / 3600;         // konversi detik menjadi jam 
    sisaDetik = detik % 3600;   //hitung sisa detik setlah konversi jam
    menit = sisaDetik / 60;     //konversi sisa detik menjadi menit
    sisaDetik %= 60;            //hitung sisa detik setelah konversi menit

    // format waktu menjadi HH:MM:SS
    waktu = "0" + to_string(jam) + ":" "0" + to_string(menit) + ":" "0" + to_string(sisaDetik);
    
    return waktu;
}

int main() {
    int detik;
    cout << "Masukkan waktu dalam detik: ";
     cin >> detik;

    //fungsi detikWaktu() adalah mengembalikan string waktu
    string waktu = detikKeWaktu(detik); 
     cout << "Waktu dalam format HH:MM:SS adalah: " << waktu << endl;

    return 0;
}


