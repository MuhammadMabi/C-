#include <iostream>
// #include <conio.h>
#include <stdlib.h>
#define true1
#define false 0
using namespace std;

typedef struct node *simpul;
struct node
{
    char Isi;
    simpul next;
};
//======================
//==Prototype Function==
//======================
void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Belakang(simpul &L);
void Cetak(simpul L);
//=================
//==Function Main==
//=================
int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    char huruf;
    simpul L = NULL; // Pastikan bahwa L kosong
    cout << "Operasi Single Linked List Pada Stack\n\n";
    //==================
    //==Sisip Belakang==
    //==================
    cout << endl
         << "Penyiapan Stack " << endl
         << endl;
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    Cetak(L);
    //=========================
    //==Hapus Simpul Belakang==
    //=========================
    cout << endl
         << endl
         << "Hapus Elemen " << endl;
    Hapus_Belakang(L);
    Cetak(L);
    cout << endl
         << endl
         << "Hapus Elemen " << endl;
    Hapus_Belakang(L);
    Cetak(L);
    cout << endl
         << endl
         << "Hapus Elemen " << endl;
    Hapus_Belakang(L);
    Cetak(L);
    cout << endl
         << endl
         << "Hapus Elemen " << endl;
    Hapus_Belakang(L);
    Cetak(L);
    // getch();
}
//**************
//*FUNCTION SISIP SIMPUL DI BELAKANG**
//**************
void Sisip_Belakang(simpul &L, char elemen)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen;
    baru->next = NULL;
    if (L == NULL)
        L = baru;
    else
    {
        bantu = L;
        while (bantu->next != NULL)
            bantu = bantu->next;
        bantu->next = baru;
    }
}
//***************
//*FUNCTION HAPUS SIMPUL BELAKANG****
//***************
void Hapus_Belakang(simpul &L)
{
    simpul bantu, hapus;
    if (L == NULL)
        cout << "Linked List Kosong...........";
    else
    {
        bantu = L;
        while (bantu->next->next != NULL)
            bantu = bantu->next;
        hapus = bantu->next;
        bantu->next = NULL;
        free(hapus);
    }
}
//**************
//*FUNCTION MENCETAK ISI LINKED LIST*
//**************
void Cetak(simpul L)
{
    simpul bantu;
    if (L == NULL)
        cout << "Linked List Kosong ……….." << endl;
    else
    {
        bantu = L;
        cout << endl
             << "Isi Linked List : ";
        while (bantu->next != NULL)
        {
            cout << bantu->Isi << "->";
            bantu = bantu->next;
        }
        cout << bantu->Isi;
    }
} //==================== eof================