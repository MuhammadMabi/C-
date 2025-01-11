#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    char gender;
    float nilai;
    Mahasiswa *next;
};

Mahasiswa *head = nullptr;

void insertData()
{
    Mahasiswa *baru = new Mahasiswa;
    cout << "Masukkan Nama: ";
    cin >> baru->nama;
    cout << "Masukkan NIM: ";
    cin >> baru->nim;
    cout << "Masukkan Gender (L/P): ";
    cin >> baru->gender;
    cout << "Masukkan Nilai: ";
    cin >> baru->nilai;

    if (!head)
    {
        head = baru;
        head->next = head;
    }
    else
    {
        Mahasiswa *temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = baru;
        baru->next = head;
    }
    cout << "Data berhasil ditambahkan.\n";
}

void hapusData()
{
    if (!head)
    {
        cout << "Data kosong!\n";
        return;
    }

    string nim;
    cout << "Masukkan NIM untuk dihapus: ";
    cin >> nim;

    Mahasiswa *temp = head;
    Mahasiswa *prev = nullptr;

    do
    {
        if (temp->nim == nim)
        {
            if (prev)
            {
                prev->next = temp->next;
                if (temp == head)
                    head = temp->next;
            }
            else
            {
                Mahasiswa *last = head;
                while (last->next != head)
                    last = last->next;
                head = head->next;
                last->next = head;
            }
            delete temp;
            cout << "Data berhasil dihapus.\n";
            return;
        }
        prev = temp;
        temp = temp->next;
    } while (temp != head);

    cout << "Data tidak ditemukan.\n";
}

void cetakData()
{
    if (!head)
    {
        cout << "Data kosong!\n";
        return;
    }

    Mahasiswa *temp = head;
    do
    {
        cout << "Nama: " << temp->nama << ", NIM: " << temp->nim
             << ", Gender: " << temp->gender << ", Nilai: " << temp->nilai << "\n";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    int pilihan;
    do
    {
        cout << "\nCIRCULAR LINKED LIST\n";
        cout << "=====================\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilihan (1-4): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            insertData();
            break;
        case 2:
            hapusData();
            break;
        case 3:
            cetakData();
            break;
        case 4:
            cout << "Keluar program.\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    return 0;
}
