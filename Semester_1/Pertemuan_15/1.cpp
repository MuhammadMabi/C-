#include <iostream>
#include <climits>

int main() {
    int num, count = 0;
    int total = 0;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    std::cout << "Masukkan bilangan bulat (ketik 0 untuk berhenti):" << std::endl;

    while (true) {
        std::cin >> num;

        if (num == 0) {
            break;
        }

        count++;
        total += num;

        if (num < minVal) {
            minVal = num;
        }

        if (num > maxVal) {
            maxVal = num;
        }
    }

    if (count > 0) {
        double average = static_cast<double>(total) / count;

        std::cout << "Nilai rata-rata: " << average << std::endl;
        std::cout << "Nilai tertinggi: " << maxVal << std::endl;
        std::cout << "Nilai terendah: " << minVal << std::endl;
    } else {
        std::cout << "Tidak ada data yang dimasukkan." << std::endl;
    }

    return 0;
}
