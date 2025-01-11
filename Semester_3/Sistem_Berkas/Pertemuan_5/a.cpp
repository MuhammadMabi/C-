#include <iostream>
#include <vector>
#include <cmath> // Diperlukan untuk abs()

using namespace std;

// Fungsi untuk menghitung total pergerakan kepala disk untuk FCFS
int calculateTotalHeadMovement(const vector<int>& requests, int initialPosition) {
    int totalMovement = 0; // Inisialisasi total gerakan
    int currentPosition = initialPosition; // Posisi kepala disk saat ini

    // Hitung pergerakan untuk setiap permintaan
    for (size_t i = 0; i < requests.size(); ++i) {
        int request = requests[i];
        totalMovement += abs(currentPosition - request); // Tambahkan jarak ke total
        currentPosition = request; // Update posisi kepala disk
    }

    return totalMovement; // Kembalikan total pergerakan
}

// Fungsi untuk mencetak Gantt chart
void printGanttChart(const vector<int>& requests, int initialPosition) {
    cout << "Gantt Chart: " << initialPosition;
    for (size_t i = 0; i < requests.size(); ++i) {
        cout << " -> " << requests[i];
    }
    cout << endl; // Baris baru setelah Gantt chart
}

int main() {
    // Menggunakan push_back untuk menambahkan elemen
    vector<int> requests; // Mendeklarasikan vector kosong
    requests.push_back(130);
    requests.push_back(65);
    requests.push_back(70);
    requests.push_back(20);
    requests.push_back(10);
    requests.push_back(150);
    requests.push_back(180);
    requests.push_back(40);
    requests.push_back(91);

    int initialPosition1 = 100; // Posisi awal 1
    int initialPosition2 = 50;  // Posisi awal 2

    // Hasil untuk posisi awal 100
    cout << "Initial head position: " << initialPosition1 << endl;
    printGanttChart(requests, initialPosition1);
    int totalMovement1 = calculateTotalHeadMovement(requests, initialPosition1);
    cout << "Total head movement (initial position 100): " << totalMovement1 << endl;

    cout << endl; // Baris baru

    // Hasil untuk posisi awal 50
    cout << "Initial head position: " << initialPosition2 << endl;
    printGanttChart(requests, initialPosition2);
    int totalMovement2 = calculateTotalHeadMovement(requests, initialPosition2);
    cout << "Total head movement (initial position 50): " << totalMovement2 << endl;

    // Bandingkan hasil
    if (totalMovement2 > totalMovement1) {
        cout << "\nThe total head movement increased when the initial position changed to 50." << endl;
    } else if (totalMovement2 < totalMovement1) {
        cout << "\nThe total head movement decreased when the initial position changed to 50." << endl;
    } else {
        cout << "\nThe total head movement remained the same when the initial position changed to 50." << endl;
    }

    return 0; // Mengembalikan 0 untuk menandakan program selesai
}
