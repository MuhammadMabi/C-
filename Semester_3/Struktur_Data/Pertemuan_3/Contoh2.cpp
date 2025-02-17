// Contoh 2: Struktur Data dengan Nama dan Alamat
#include <iostream>
using namespace std;

typedef struct
{
    char FirstName[10];
    char LastName[10];
} nametype;

typedef struct
{
    char street[30];
    char city[20];
    char state[15];
    char zip[10];
} addrtype;

typedef struct
{
    nametype name;
    addrtype address;
} Mhstype;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    
    Mhstype Mahasiswa;

    // Menginput dari keyboard
    cout << "Masukan Nama Depan : ";
    cin.getline(Mahasiswa.name.FirstName, 10);
    cout << "Masukan Nama Keluarga : ";
    cin.getline(Mahasiswa.name.LastName, 10);
    cout << "Masukan Alamat : ";
    cin.getline(Mahasiswa.address.street, 30);
    cout << "Masukan Kota : ";
    cin.getline(Mahasiswa.address.city, 20);
    cout << "Masukan Propinsi : ";
    cin.getline(Mahasiswa.address.state, 15);
    cout << "Masukan Kode Pos : ";
    cin.getline(Mahasiswa.address.zip, 10);

    // Mencetak hasil inputan
    cout << endl;
    cout << Mahasiswa.name.FirstName << " " << Mahasiswa.name.LastName << endl;
    cout << Mahasiswa.address.street << endl;
    cout << Mahasiswa.address.city << endl;
    cout << Mahasiswa.address.state << endl;
    cout << Mahasiswa.address.zip << endl;

    return 0;
}
