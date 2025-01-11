#include <iostream>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n" << endl;

    int Nilai[20];  // Array to store the elements
    int Posisi[20]; // Array to store positions where the number is found
    int i, N, Bilangan, Banyak = 0;
    bool ketemu = false; // Flag to check if the number is found

    cout << "Masukkan Banyaknya Bilangan = ";
    cin >> N;
    cout << endl;

    // Membaca elemen Array
    for (i = 0; i < N; i++)
    {
        cout << "Masukkan elemen ke-" << i + 1 << " = ";
        cin >> Nilai[i];
    }

    // Menampilkan elemen Array
    cout << "\nDeretan Bilangan = ";
    for (i = 0; i < N; i++)
    {
        cout << Nilai[i] << " ";
    }
    cout << endl;

    cout << "\nMasukkan Bilangan yang akan dicari = ";
    cin >> Bilangan;

    // Melakukan pencarian
    for (i = 0; i < N; i++)
    {
        if (Nilai[i] == Bilangan)
        {
            ketemu = true;
            Posisi[Banyak] = i;
            Banyak++;
        }
    }

    if (ketemu)
    {
        cout << "Bilangan " << Bilangan << " ditemukan sebanyak " << Banyak << " kali pada posisi ke = ";
        for (i = 0; i < Banyak; i++)
        {
            cout << Posisi[i] + 1 << " "; // Adding 1 to make the position 1-based instead of 0-based
        }
        cout << endl;
    }
    else
    {
        cout << "Bilangan " << Bilangan << " tidak ditemukan." << endl;
    }

    return 0;
}
