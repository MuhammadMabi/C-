#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Fungsi untuk menghitung total pergerakan kepala disk menggunakan algoritma SCAN
int calculateTotalHeadMovement(vector<int> requests, int initialPosition, int diskSize) {
    int totalMovement = 0;
    int currentPosition = initialPosition;

    // Menambahkan posisi awal ke dalam daftar permintaan
    requests.push_back(initialPosition);

    // Mengurutkan permintaan
    sort(requests.begin(), requests.end());

    // Memproses permintaan ke arah atas terlebih dahulu
    for (size_t i = 0; i < requests.size(); i++) {
        if (requests[i] >= initialPosition) {
            // Hitung jarak ke permintaan saat ini
            totalMovement += abs(currentPosition - requests[i]);
            currentPosition = requests[i];
        }
    }

    // Menggerakkan kepala disk ke batas atas disk
    if (currentPosition < diskSize) {
        totalMovement += abs(currentPosition - diskSize);
        currentPosition = diskSize;
    }

    // Memproses permintaan ke arah bawah
    for (int i = requests.size() - 1; i >= 0; i--) {
        if (requests[i] < initialPosition) {
            totalMovement += abs(currentPosition - requests[i]);
            currentPosition = requests[i];
        }
    }

    return totalMovement;
}

void printGanttChart(const vector<int>& requests, int initialPosition, int diskSize) {
    cout << "Gantt Chart: " << initialPosition;
    for (size_t i = 0; i < requests.size(); i++) {
        cout << " -> " << requests[i];
    }
    cout << " -> " << diskSize << endl;  // Menambahkan batas atas disk
}

int main() {
    vector<int> requests; // Deklarasi vector
    requests.push_back(130);
    requests.push_back(65);
    requests.push_back(70);
    requests.push_back(20);
    requests.push_back(10);
    requests.push_back(150);
    requests.push_back(180);
    requests.push_back(40);
    requests.push_back(91); // Permintaan track
    int diskSize = 180; // Ukuran disk
    int initialPosition1 = 100; // Posisi awal pertama
    int initialPosition2 = 50;  // Posisi awal kedua

    // Hasil untuk posisi awal 100
    cout << "Posisi kepala disk awal: " << initialPosition1 << endl;
    printGanttChart(requests, initialPosition1, diskSize);
    int totalMovement1 = calculateTotalHeadMovement(requests, initialPosition1, diskSize);
    cout << "Total jarak pergerakan (posisi awal 100): " << totalMovement1 << endl;

    cout << endl;

    // Hasil untuk posisi awal 50
    cout << "Posisi kepala disk awal: " << initialPosition2 << endl;
    printGanttChart(requests, initialPosition2, diskSize);
    int totalMovement2 = calculateTotalHeadMovement(requests, initialPosition2, diskSize);
    cout << "Total jarak pergerakan (posisi awal 50): " << totalMovement2 << endl;

    // Perbandingan hasil
    if (totalMovement2 > totalMovement1) {
        cout << "\nTotal pergerakan kepala disk bertambah ketika posisi awal diubah menjadi 50." << endl;
    } else if (totalMovement2 < totalMovement1) {
        cout << "\nTotal pergerakan kepala disk berkurang ketika posisi awal diubah menjadi 50." << endl;
    } else {
        cout << "\nTotal pergerakan kepala disk tetap sama ketika posisi awal diubah menjadi 50." << endl;
    }

    return 0;
}
