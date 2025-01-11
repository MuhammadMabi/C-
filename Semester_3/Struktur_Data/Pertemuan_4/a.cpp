#include <iostream>
#include <cstring>
using namespace std;

struct Mahasiswa
{
    char Nim[15];
    char Nama[25];
    char Alamat[40];
    short Umur;
};

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    Mahasiswa Mhs;

    cout << "Nim :";
    cin.getline(Mhs.Nim, 15);
    cout << "Nama :";
    cin.getline(Mhs.Nama, 25);
    cout << "Alamat :";
    cin.getline(Mhs.Alamat, 40);
    cout << "Umur :";
    cin >> Mhs.Umur;

    cout << "\n\n\nNim :" << Mhs.Nim;
    cout << "\nNama :" << Mhs.Nama;
    cout << "\nAlamat :" << Mhs.Alamat;
    cout << "\nUmur :" << Mhs.Umur;

    return 0;
}
