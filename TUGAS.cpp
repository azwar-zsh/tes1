#include <iostream>  
using namespace std;

int main(){
   int tugas, uts, uas;
   float nilaiAkhir;

   cout <<  "Masukan nilai tugas: ";
   cin >> tugas; //90

   cout << "Masukan nilai  UTS: ";
   cin >> uts; //80

   cout << "Masukan nilai UAS: ";
   cin >> uas; //70

   nilaiAkhir = (tugas * 30.0 / 100) + (uts * 30.0 / 100) + (uas * 40.0 / 100);// 100

   nilaiAkhir += 5; //100 + 5

   int jumlahPercobaan = 0;
   jumlahPercobaan++;

   if(nilaiAkhir >= 75){
      cout << "Status: Lulus\n";
   }

   if(nilaiAkhir >= 75 && jumlahPercobaan > 0){
     cout << "Memenuhi Syarat Kelulusan\n";
   }
     
   cout << "Nilai Akhir: " << nilaiAkhir;

   return 0;

}
