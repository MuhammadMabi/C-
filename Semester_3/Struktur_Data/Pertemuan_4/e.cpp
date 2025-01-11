#include <iostream>
#include <cstring>
using namespace std;

struct Mahasiswa
{
    char Nim[15];
    char Nama[25];
    char Kelas[25];
    int Nilai_Tugas;
    int Nilai_UTS;
    int Nilai_UAS;
    float Nilai_Akhir;
    char Nilai_Huruf[1];
};

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    Mahasiswa Mhs;

    cout << "Masukan Nim :";
    cin.getline(Mhs.Nim, 15);
    cout << "Masukan Nama :";
    cin.getline(Mhs.Nama, 25);
    cout << "Masukan Kelas :";
    cin.getline(Mhs.Kelas, 25);
    cout << "Masukan Nilai Tugas :";
    cin >> Mhs.Nilai_Tugas;
    cout << "Masukan Nilai UTS :";
    cin >> Mhs.Nilai_UTS;
    cout << "Masukan Nilai UAS :";
    cin >> Mhs.Nilai_UAS;

    Mhs.Nilai_Akhir = (20.0 / 100.0) * Mhs.Nilai_Tugas + (35.0 / 100.0) * Mhs.Nilai_UTS + (45.0 / 100.0) * Mhs.Nilai_UAS;

    if ((Mhs.Nilai_Akhir < 0) | (Mhs.Nilai_Akhir > 100))
    {
        cout << "Nilai Akhir melebihi range 0..100 :" << Mhs.Nilai_Huruf;
        return 0;
    }
    else if ((85 < Mhs.Nilai_Akhir) & (Mhs.Nilai_Akhir <= 100))
    {
        strcpy(Mhs.Nilai_Huruf, "A");
    }
    else if ((70 < Mhs.Nilai_Akhir) & (Mhs.Nilai_Akhir <= 85))
    {
        strcpy(Mhs.Nilai_Huruf, "B");
    }
    else if ((55 < Mhs.Nilai_Akhir) & (Mhs.Nilai_Akhir <= 70))
    {
        strcpy(Mhs.Nilai_Huruf, "C");
    }
    else if ((40 < Mhs.Nilai_Akhir) & (Mhs.Nilai_Akhir <= 55))
    {
        strcpy(Mhs.Nilai_Huruf, "D");
    }
    else if ((0 < Mhs.Nilai_Akhir) & (Mhs.Nilai_Akhir <= 40))
    {
        strcpy(Mhs.Nilai_Huruf, "E");
    }
    else
    {
        strcpy(Mhs.Nilai_Huruf, "E");
    }

    cout << "\nNIM :" << Mhs.Nim;
    cout << "\nNama :" << Mhs.Nama;
    cout << "\nKelas :" << Mhs.Kelas;
    cout << "\nNilai Akhir :" << Mhs.Nilai_Akhir;
    cout << "\nNilai Huruf :" << Mhs.Nilai_Huruf;

    return 0;
}
