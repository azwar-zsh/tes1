// Dalam bahasa C++, kita bisa menyingkat penulisan operasi assignment yang berbentuk:
// variabel = variabel operator ekspresi;
// menjadi
// variabel operator= ekspresi;

// Penyingkatan berlaku untuk operator aritmetika. Sebagai contoh:
// Operasi Assignment x = x + 1; Ekuivalen dengan x += 1;

#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;

    // bulan pertama
    luas_kandang += 7; 
    cout << luas_kandang << endl;

    // bulan kedua
    luas_kandang += 7;
    cout << luas_kandang << endl;

    // bulan ketiga
    luas_kandang += 7;
    cout << luas_kandang << endl;
}
