#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // for std::setw
class HashTable
{
private:
    int size;                       // Ukuran tabel hash
    std::vector<std::string> table; // Tabel untuk menyimpan kunci
public:
    HashTable(int s) : size(s)
    {
        table.resize(size); // Mengatur ukuran tabel
    }
    // Fungsi hash dengan teknik modulo +1
    int hashFunction(int key)
    {
        return (key % size + 1) % size; // Menambahkan +1 untuk menghindari indeks nol
    }
    // Metode untuk memasukkan kunci
    void insert(int key)
    {
        int index = hashFunction(key);
        // Cek apakah indeks sudah terisi
        while (!table[index].empty())
        {
            index = (index + 1) % size; // Mencari indeks berikutnya (linear probing)
        }
        table[index] = std::to_string(key);
    }
    // Metode untuk menampilkan isi tabel hash dalam bentuk tabel
    void display()
    {
        std::cout << std::setw(10) << "Index" << std::setw(15) << "Key" << std::endl;
        std::cout << std::string(25, '-') << std::endl; // Garis pemisah
        for (int i = 0; i < size; ++i)
        {
            std::cout << std::setw(10) << i << std::setw(15) << (table[i].empty() ? "-" : table[i]) << std::endl;
        }
    }
};
// Fungsi utama
int main()
{
    // tugas A
    HashTable hashTable(11);                                     // Ukuran tabel hash
    std::vector<int> keys = {23, 45, 12, 34, 12, 22, 55, 9, 56}; // Kunci yang akan disimpan

    // Tugas B
    // HashTable hashTable(12);                                    // Ukuran tabel hash
    // std::vector<int> keys = {23, 15, 12, 34, 17, 22, 55, 9, 5}; // Kunci yang akan disimpan

    // Tugas C
    // HashTable hashTable(10);                                     // Ukuran tabel hash
    // std::vector<int> keys = {3, 45, 12, 14, 32, 102, 55, 9, 86}; // Kunci yang akan disimpan

    // Memasukkan kunci ke dalam tabel hash
    for (int key : keys)
    {
        hashTable.insert(key);
        std::cout << "Inserted key: " << key << std::endl;
    }
    // Tampilkan isi tabel hash
    std::cout << "\nHash Table Content:\n";
    hashTable.display();
    return 0;
}