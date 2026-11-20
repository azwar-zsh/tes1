#include <iostream>
using namespace std;

int main() {
    char ulang;
    do {
        int jumlah;
        int nilai[100];
        int total = 0;
        float rata;

        cout << "Jumlah mahasiswa : ";
        cin >> jumlah; // 3

        for(int i = 0; i < jumlah; i++) {
            cout << "Nilai mahasiswa ke-" << i + 1 << ": ";
            cin >> nilai[i];
        }

        for(int i = 0; i < jumlah; i++) {
            total = total + nilai[i];
        }

        cout << "===== HASIL PERHITUNGAN =====" << endl;

        int i = 0;
        while(i < jumlah) {
            cout << "Nilai mahasiswa ke-" << i + 1 << ": " << nilai[i] << endl;
            i++;
        }

        rata = (float)total / jumlah;

        cout << "Total Nilai: " << total << endl;
        cout << "Rata-rata: " << rata << endl;

    
        cout << "Input data lagi? (Y/T): ";
        cin >> ulang;

    } while(ulang == 'Y' || ulang == 'y');

    return 0;
}

