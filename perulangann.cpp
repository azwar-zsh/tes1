#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan nilai: ";
    cin >> n; //5

    cout << "Bilangan ganjil: ";
    for (int i = 1; i <= 5; i += 2) { 
        cout << i << " ";
    }

    cout << "\nBilangan genap: ";
    int j = 2; 
    while (j <= n) {
        cout << j << " ";
        j += 2;
    }

    cout << "\nKelipatan 3: ";
    int k = 3;
    if (n >= 3) {
        do {
            cout << k << " "; 
            k += 3;
        } while (k <= n);
    }

    cout << endl;

    return 0;
}