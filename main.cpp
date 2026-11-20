#include <iostream>
using namespace std;

int main() {
    int panjang, lebar, luas;

    cout << "Masukkan panjang: "<< endl;
    cin >> panjang; // Menerima input panjang

    cout << "Masukkan lebar: ";
    cin >> lebar; // Menerima input lebar

    luas = panjang * lebar; // Rumus luas
    cout << "Luas persegi panjang adalah: " << luas << endl;

    return 0;
}
