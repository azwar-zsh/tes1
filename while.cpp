#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    int total_baris = 0;

    while (total_baris < 3) {
        luas_kandang += 7;
        cout << luas_kandang << endl;

    total_baris +=1;

    }
}
// 12 + 7 = 19
//19
// ttl = 1
//19+7 = 26
//26
// ttl = 2
// 26 + 7 = 33
//33
//

// Secara garis besar, struktur perulangan while bekerja sebagai berikut:

// Uji nilai pada kondisi.
// Apabila bernilai benar:
// Jalankan kode di dalam struktur while tersebut.
// Kembali ke langkah 1.
// Apabila bernilai salah:
// Perulangan while selesai.