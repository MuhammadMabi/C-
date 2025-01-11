// Contoh 3: Struktur Data Keluarga dengan Alamat dan Penghasilan
#include <iostream>
#include <cstdlib>
using namespace std;

#define LEBAR_FN 30
#define LEBAR_LN 30
#define LEBAR_CITY 30
#define LEBAR_STR 30
#define LEBAR_STATE 15
#define LEBAR_ZIP 10
#define LEBAR_INCOME 10

typedef struct
{
    char FirstName[LEBAR_FN];
    char LastName[LEBAR_LN];
} strNama;

typedef struct
{
    char street[LEBAR_STR];
    char city[LEBAR_CITY];
    char state[LEBAR_STATE];
    char zip[LEBAR_ZIP];
} strAlamat;

typedef struct
{
    strNama NamaKeluarga;
    strAlamat AlamatKeluarga;
    int Income;
} strKeluarga;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    
    strKeluarga Keluarga[2];
    char tmpIncome[LEBAR_INCOME];

    // Menginput dari keyboard
    for (int i = 0; i <= 1; i++)
    {
        cout << endl
             << "Memasukan Data Keluarga ke-" << i + 1 << endl;
        cout << "Masukan Nama Depan : ";
        cin.getline(Keluarga[i].NamaKeluarga.FirstName, LEBAR_FN);
        cout << "Masukan Nama Belakang : ";
        cin.getline(Keluarga[i].NamaKeluarga.LastName, LEBAR_LN);
        cout << "Masukan Alamat : ";
        cin.getline(Keluarga[i].AlamatKeluarga.street, LEBAR_STR);
        cout << "Masukan Kota : ";
        cin.getline(Keluarga[i].AlamatKeluarga.city, LEBAR_CITY);
        cout << "Masukan Propinsi : ";
        cin.getline(Keluarga[i].AlamatKeluarga.state, LEBAR_STATE);
        cout << "Masukan Kode Pos : ";
        cin.getline(Keluarga[i].AlamatKeluarga.zip, LEBAR_ZIP);
        cout << "Masukan Penghasilan : ";
        cin.getline(tmpIncome, LEBAR_INCOME);
        Keluarga[i].Income = atoi(tmpIncome);
        cout << endl;
    }

    // Mencetak hasil inputan
    cout << endl;
    for (int i = 0; i <= 1; i++)
    {
        cout << "Keluarga ke-" << i + 1 << endl;
        cout << Keluarga[i].NamaKeluarga.FirstName << " "
        << Keluarga[i].NamaKeluarga.LastName << endl;
        cout << Keluarga[i].AlamatKeluarga.street << endl;
        cout << Keluarga[i].AlamatKeluarga.city << endl;
        cout << Keluarga[i].AlamatKeluarga.state << endl;
        cout << Keluarga[i].AlamatKeluarga.zip << endl;
        cout << "Penghasilan = " << Keluarga[i].Income << endl;
    }

    return 0;
}
