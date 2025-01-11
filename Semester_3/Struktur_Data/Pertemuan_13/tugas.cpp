#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string nama;
    int nim;
    string gender;
    float nilai;
    Node *next;
    Node *prev;

    Node(int n, string nm, string g, float nil) : nim(n), nama(nm), gender(g), nilai(nil), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertData(int nim, string nama, string gender, float nilai)
    {
        Node *newNode = new Node(nim, nama, gender, nilai);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            Node *current = head;
            while (current != nullptr && current->nim < nim)
            {
                current = current->next;
            }
            if (current == head)
            {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            else if (current == nullptr)
            {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
            else
            {
                newNode->next = current;
                newNode->prev = current->prev;
                current->prev->next = newNode;
                current->prev = newNode;
            }
        }
    }

    void deleteData(int nim)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->nim == nim)
            {
                if (current == head)
                {
                    head = current->next;
                    if (head)
                        head->prev = nullptr;
                }
                else if (current == tail)
                {
                    tail = current->prev;
                    if (tail)
                        tail->next = nullptr;
                }
                else
                {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                }
                delete current;
                cout << "Data dengan NIM " << nim << " telah dihapus.\n";
                return;
            }
            current = current->next;
        }
        cout << "Data dengan NIM " << nim << " tidak ditemukan.\n";
    }

    void printData()
    {
        if (!head)
        {
            cout << "Data kosong.\n";
            return;
        }
        Node *current = head;
        while (current != nullptr)
        {
            cout << "NIM: " << current->nim << ", Nama: " << current->nama
                 << ", Gender: " << current->gender << ", Nilai: " << current->nilai << endl;
            current = current->next;
        }
    }
};

void showMenu()
{
    cout << "\nLIN. DOUBLY LINKED LIST\n";
    cout << "==========================\n";
    cout << "1. INSERT DATA\n";
    cout << "2. HAPUS DATA\n";
    cout << "3. CETAK DATA\n";
    cout << "4. EXIT\n";
    cout << "Pilihan (1 - 4): ";
}

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    DoublyLinkedList dll;
    int choice, nim;
    string nama, gender;
    float nilai;

    while (true)
    {
        showMenu();
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "Masukkan NIM: ";
            cin >> nim;
            cin.ignore();
            cout << "Masukkan Nama: ";
            getline(cin, nama);
            cout << "Masukkan Gender: ";
            getline(cin, gender);
            cout << "Masukkan Nilai: ";
            cin >> nilai;
            dll.insertData(nim, nama, gender, nilai);
            break;

        case 2:
            cout << "Masukkan NIM yang akan dihapus: ";
            cin >> nim;
            dll.deleteData(nim);
            break;

        case 3:
            dll.printData();
            break;

        case 4:
            cout << "Keluar dari program.\n";
            return 0;

        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}
