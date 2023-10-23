#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    // Deklarasi array dan variabel indeks
    int array[10];
    int indeks;

    array[0] = 0x10CC;

    // Alamat elemen pertama
    intptr_t alamat_pertama = reinterpret_cast<intptr_t>(&array);

    // Menghitung alamat elemen A[i]
    cout << "Masukkan indeks i: ";
    cin >> indeks;

    intptr_t alamat_elemen_i = alamat_pertama + (indeks * sizeof(int));

    cout << "Alamat A[" << indeks << "]: " << hex << alamat_elemen_i << endl;

    return 0;
}
