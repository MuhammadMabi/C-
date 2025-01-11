#include <iostream>
#include <map>
#include <string>

int main()
{

    std::map<std::string, int> bobotNilai;
    bobotNilai["A"] = 4;
    bobotNilai["B"] = 3;
    bobotNilai["C"] = 2;
    bobotNilai["D"] = 1;
    bobotNilai["E"] = 0;

    int totalBobot = 0;
    int totalSks = 0;
    int sks;
    std::string mataKuliah, nilai;

    std::cout << "Masukkan mata kuliah dan nilai (selesai jika mata kuliah = 'selesai'):" << std::endl;

    while (true)
    {
        std::cout << "Masukkan mata kuliah:";
        std::cin >> mataKuliah;

        if (mataKuliah == "selesai")
        {
            break;
        }

        std::cout << "Masukkan nilai:";
        std::cin >> nilai;
        std::cout << "Masukkan sks:";
        std::cin >> sks;

        if (bobotNilai.find(nilai) != bobotNilai.end())
        {
            totalBobot += bobotNilai[nilai] * sks;
            totalSks += sks;
        }
        else
        {
            std::cout << "Nilai tidak valid." << std::endl;
        }
    }

    if (totalSks > 0)
    {
        double ip = static_cast<double>(totalBobot) / totalSks;

        std::cout << "IP mahasiswa: " << ip << std::endl;
    }
    else
    {
        std::cout << "Tidak ada data yang dimasukkan atau input tidak valid." << std::endl;
    }

    return 0;
}
