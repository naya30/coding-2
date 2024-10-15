#include <iostream>
using namespace std;

int main()
{
    int data, ganjil = 0, genap = 0;
    cout << "Masukkan jumlah data: "; cin >> data;

    for (int a = 0; a <= data; a++) {
        if (a % 2 == 0) {
            genap += a;
        }
        else {
            ganjil += a;
        }
    }

    cout << "Jumlah total bilangan ganjil: " << ganjil;
    cout << "\nJumlah total bilangan genap: " << genap;

    return 0;
}