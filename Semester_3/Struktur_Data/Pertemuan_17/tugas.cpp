#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    string nama;
    int nim;
    char gender;
    float nilai;
    Mahasiswa *next;
    Mahasiswa *prev;
};

class CircularDoublyLinkedList
{
private:
    Mahasiswa *head;

public:
    CircularDoublyLinkedList() : head(nullptr) {}

    void insertData()
    {
        Mahasiswa *newNode = new Mahasiswa();
        cout << "\nMasukkan Nama  : ";
        cin.ignore();
        getline(cin, newNode->nama);
        cout << "Masukkan NIM   : ";
        cin >> newNode->nim;
        cout << "Masukkan Gender (L/P): ";
        cin >> newNode->gender;
        cout << "Masukkan Nilai : ";
        cin >> newNode->nilai;

        newNode->next = newNode->prev = nullptr;

        if (!head)
        {
            head = newNode;
            head->next = head->prev = head;
        }
        else
        {
            Mahasiswa *current = head;
            Mahasiswa *prev = nullptr;
            do
            {
                if (current->nim > newNode->nim)
                    break;
                prev = current;
                current = current->next;
            } while (current != head);

            if (!prev)
            {
                newNode->next = head;
                newNode->prev = head->prev;
                head->prev->next = newNode;
                head->prev = newNode;
                head = newNode;
            }
            else
            {
                newNode->next = current;
                newNode->prev = prev;
                prev->next = newNode;
                current->prev = newNode;
            }
        }

        cout << "Data berhasil ditambahkan!\n";
    }

    void deleteData()
    {
        if (!head)
        {
            cout << "\nLinked List kosong!\n";
            return;
        }

        int nim;
        cout << "\nMasukkan NIM yang akan dihapus: ";
        cin >> nim;

        Mahasiswa *current = head;
        Mahasiswa *toDelete = nullptr;
        do
        {
            if (current->nim == nim)
            {
                toDelete = current;
                break;
            }
            current = current->next;
        } while (current != head);

        if (!toDelete)
        {
            cout << "Data dengan NIM " << nim << " tidak ditemukan!\n";
            return;
        }

        if (toDelete == head && head->next == head)
        {

            head = nullptr;
        }
        else
        {
            toDelete->prev->next = toDelete->next;
            toDelete->next->prev = toDelete->prev;
            if (toDelete == head)
            {
                head = toDelete->next;
            }
        }

        delete toDelete;
        cout << "Data berhasil dihapus!\n";
    }

    void printData()
    {
        if (!head)
        {
            cout << "\nLinked List kosong!\n";
            return;
        }

        Mahasiswa *current = head;
        cout << "\nDaftar Data Mahasiswa:\n";
        cout << "==========================================\n";
        cout << "NIM\tNama\tGender\tNilai\n";
        cout << "==========================================\n";
        do
        {
            cout << current->nim << "\t" << current->nama << "\t" << current->gender << "\t" << current->nilai << "\n";
            current = current->next;
        } while (current != head);
    }

    ~CircularDoublyLinkedList()
    {
        if (!head)
            return;
        Mahasiswa *current = head;
        do
        {
            Mahasiswa *next = current->next;
            delete current;
            current = next;
        } while (current != head);
    }
};

int main()
{
    CircularDoublyLinkedList list;
    int choice;

    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    do
    {
        cout << "\nCIRCULAR DOUBLY LINKED LIST\n";
        cout << "==========================\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilihan (1 - 4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            list.insertData();
            break;
        case 2:
            list.deleteData();
            break;
        case 3:
            list.printData();
            break;
        case 4:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (choice != 4);

    return 0;
}
