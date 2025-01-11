#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    string nama;
    int nim;
    char gender;
    float nilai;
    Mahasiswa *next, *prev;
};

class CDLL
{
private:
    Mahasiswa *head = nullptr;

public:
    void insert()
    {
        Mahasiswa *newNode = new Mahasiswa();
        cout << "\nNama  : ";
        cin.ignore();
        getline(cin, newNode->nama);
        cout << "NIM   : ";
        cin >> newNode->nim;
        cout << "Gender: ";
        cin >> newNode->gender;
        cout << "Nilai : ";
        cin >> newNode->nilai;

        if (!head)
        {
            head = newNode->next = newNode->prev = newNode;
        }
        else
        {
            Mahasiswa *temp = head;
            while (temp->next != head && temp->next->nim < newNode->nim)
                temp = temp->next;

            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
            if (newNode->nim < head->nim)
                head = newNode;
        }
        cout << "Data berhasil ditambahkan!\n";
    }

    void remove()
    {
        if (!head)
            return void(cout << "\nData kosong!\n");
        int nim;
        cout << "Masukkan NIM yang akan dihapus: ";
        cin >> nim;

        Mahasiswa *temp = head, *del = nullptr;
        do
        {
            if (temp->nim == nim)
            {
                del = temp;
                break;
            }
            temp = temp->next;
        } while (temp != head);

        if (!del)
            return void(cout << "NIM tidak ditemukan!\n");

        if (del == head && head->next == head)
        {
            head = nullptr;
        }
        else
        {
            del->prev->next = del->next;
            del->next->prev = del->prev;
            if (del == head)
                head = del->next;
        }
        delete del;
        cout << "Data berhasil dihapus!\n";
    }

    void print()
    {
        if (!head)
            return void(cout << "\nData kosong!\n");
        Mahasiswa *temp = head;
        cout << "\nNIM\tNama\tGender\tNilai\n";
        do
        {
            cout << temp->nim << "\t" << temp->nama << "\t" << temp->gender << "\t" << temp->nilai << "\n";
            temp = temp->next;
        } while (temp != head);
    }
};

int main()
{
    CDLL list;
    int choice;

    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    do
    {
        cout << "\n1. Insert Data\n2. Hapus Data\n3. Cetak Data\n4. Exit\nPilih: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            list.insert();
            break;
        case 2:
            list.remove();
            break;
        case 3:
            list.print();
            break;
        case 4:
            cout << "Keluar program.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (choice != 4);

    return 0;
}
