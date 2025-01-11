#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
    string nama;
    int nim;
    char gender;
    float nilaiStrukturData;
    Mahasiswa *next;
};

Mahasiswa *createMahasiswa(string nama, int nim, char gender, float nilai)
{
    Mahasiswa *newMahasiswa = new Mahasiswa();
    newMahasiswa->nama = nama;
    newMahasiswa->nim = nim;
    newMahasiswa->gender = gender;
    newMahasiswa->nilaiStrukturData = nilai;
    newMahasiswa->next = nullptr;
    return newMahasiswa;
}

void enqueue(Mahasiswa *&front, Mahasiswa *&rear, string nama, int nim, char gender, float nilai)
{
    Mahasiswa *newMahasiswa = createMahasiswa(nama, nim, gender, nilai);
    if (rear == nullptr)
    {
        front = rear = newMahasiswa;
    }
    else
    {
        rear->next = newMahasiswa;
        rear = newMahasiswa;
    }
    cout << "Data mahasiswa berhasil ditambahkan.\n";
}

void dequeue(Mahasiswa *&front, Mahasiswa *&rear)
{
    if (front == nullptr)
    {
        cout << "Queue kosong, tidak ada data yang bisa dihapus.\n";
        return;
    }
    Mahasiswa *temp = front;
    front = front->next;
    if (front == nullptr)
    {
        rear = nullptr;
    }
    cout << "Data mahasiswa dengan NIM " << temp->nim << " telah dihapus.\n";
    delete temp;
}

void printQueue(Mahasiswa *front)
{
    if (front == nullptr)
    {
        cout << "Queue kosong.\n";
        return;
    }
    cout << "Data Mahasiswa dalam Queue:\n";
    Mahasiswa *temp = front;
    while (temp != nullptr)
    {
        cout << "Nama: " << temp->nama << ", NIM: " << temp->nim
             << ", Gender: " << temp->gender << ", Nilai Struktur Data: "
             << temp->nilaiStrukturData << endl;
        temp = temp->next;
    }
}

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    Mahasiswa *front = nullptr;
    Mahasiswa *rear = nullptr;
    int pilihan;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Insert Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Cetak Data\n";
        cout << "4. Exit\n";
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1)
        {
            string nama;
            int nim;
            char gender;
            float nilai;

            cout << "Masukkan Nama: ";
            cin >> ws;
            getline(cin, nama);
            cout << "Masukkan NIM: ";
            cin >> nim;
            cout << "Masukkan Gender (L/P): ";
            cin >> gender;
            cout << "Masukkan Nilai Struktur Data: ";
            cin >> nilai;

            enqueue(front, rear, nama, nim, gender, nilai);
        }
        else if (pilihan == 2)
        {
            dequeue(front, rear);
        }
        else if (pilihan == 3)
        {
            printQueue(front);
        }
        else if (pilihan == 4)
        {
            cout << "Keluar dari program.\n";
        }
        else
        {
            cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    while (front != nullptr)
    {
        dequeue(front, rear);
    }

    return 0;
}
