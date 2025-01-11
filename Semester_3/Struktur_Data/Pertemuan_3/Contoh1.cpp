// Contoh 1: Struktur Data Mahasiswa
#include <iostream>
using namespace std;

typedef struct
{
    char NIM[20];
    char nama[50];
    int nilai;
} mhs;

mhs mahasiswa;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    
    // Menginput dari keyboard
    cout << "Masukan NIM : ";
    cin >> mahasiswa.NIM;
    cout << "Masukan Nama : ";
    cin >> mahasiswa.nama;
    cout << "Masukan Nilai : ";
    cin >> mahasiswa.nilai;

    // Mencetak hasil inputan
    cout << "\nBerikut adalah outputnya:" << endl;
    cout << "NIM : " << mahasiswa.NIM << endl;
    cout << "Nama : " << mahasiswa.nama << endl;
    cout << "Nilai : " << mahasiswa.nilai << endl;

    return 0;
}
