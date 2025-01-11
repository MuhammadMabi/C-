#include <iostream>
#include <cstring>

using namespace std;

struct Mahasiswa
{
    char nama[50];
    char nim[20];
    char gender[10];
    float nilaiStrukturData;
    Mahasiswa *next;
};

Mahasiswa *head = nullptr;

Mahasiswa *createNode(const char *nama, const char *nim, const char *gender, float nilai)
{
    Mahasiswa *newNode = new Mahasiswa();
    strncpy(newNode->nama, nama, sizeof(newNode->nama) - 1);
    strncpy(newNode->nim, nim, sizeof(newNode->nim) - 1);
    strncpy(newNode->gender, gender, sizeof(newNode->gender) - 1);
    newNode->nilaiStrukturData = nilai;
    newNode->next = nullptr;
    return newNode;
}

void insertData()
{
    char nama[50], nim[20], gender[10];
    float nilai;

    cout << "Masukkan Nama: ";
    cin.ignore();
    cin.getline(nama, 50);
    cout << "Masukkan NIM: ";
    cin.getline(nim, 20);
    cout << "Masukkan Gender: ";
    cin.getline(gender, 10);
    cout << "Masukkan Nilai Struktur Data: ";
    cin >> nilai;

    Mahasiswa *newNode = createNode(nama, nim, gender, nilai);

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Mahasiswa *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "Data mahasiswa berhasil ditambahkan!\n";
}

void hapusData()
{
    if (head == nullptr)
    {
        cout << "Linked List kosong. Tidak ada data yang bisa dihapus.\n";
        return;
    }

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Mahasiswa *temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    cout << "Data mahasiswa terakhir berhasil dihapus!\n";
}

void cetakData()
{
    if (head == nullptr)
    {
        cout << "Linked List kosong. Tidak ada data yang bisa ditampilkan.\n";
        return;
    }

    Mahasiswa *temp = head;
    cout << "\nData Mahasiswa dalam Linked List:\n";
    cout << "-----------------------------------\n";
    while (temp != nullptr)
    {
        cout << "Nama: " << temp->nama << ", NIM: " << temp->nim
             << ", Gender: " << temp->gender
             << ", Nilai Struktur Data: " << temp->nilaiStrukturData << endl;
        temp = temp->next;
    }
}

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    int pilihan;
    do
    {
        cout << "\nLIN. SINGLY LINKED LIST\n";
        cout << "==========================\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilihan (1 – 4): ";
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
            cout << "Terima kasih! Program selesai.\n";
            break;
        default:
            cout << "Pilihan tidak valid! Silakan pilih antara 1 - 4.\n";
        }
    } while (pilihan != 4);

    return 0;
}
