#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Process
{
    int id;            // ID proses
    int burstTime;     // Waktu burst
    int remainingTime; // Sisa waktu burst
};

void roundRobin(vector<Process> &processes, int quantumTime)
{
    queue<Process> readyQueue;

    // Inisialisasi sisa waktu burst dan ID proses
    for (int i = 0; i < processes.size(); ++i)
    {
        processes[i].remainingTime = processes[i].burstTime;
        processes[i].id = i + 1;
        readyQueue.push(processes[i]);
    }

    int currentTime = 0;
    int totalWaitingTime = 0;

    cout << "Proses Burst Time Sisa Burst Time Waktu Tunggu" << endl;

    // Lakukan penjadwalan proses
    while (!readyQueue.empty())
    {
        Process currentProcess = readyQueue.front();
        readyQueue.pop();

        // Proses tidak selesai dalam satu quantum time
        if (currentProcess.remainingTime > quantumTime)
        {
            currentTime += quantumTime;
            currentProcess.remainingTime -= quantumTime;
            cout << "   " << currentProcess.id << "          " << currentProcess.burstTime << "             " << currentProcess.remainingTime << "              " << currentTime << endl;
            readyQueue.push(currentProcess); // Masukkan kembali proses ke antrian
        }
        // Proses selesai dalam satu quantum time
        else
        {
            currentTime += currentProcess.remainingTime;
            totalWaitingTime += currentTime - currentProcess.burstTime;
            cout << "   " << currentProcess.id << "          " << currentProcess.burstTime << "             0              " << currentTime << endl;
        }
    }

    double averageWaitingTime = (double)totalWaitingTime / processes.size();
    cout << "\nWaktu Tunggu Rata-rata: " << averageWaitingTime << endl;
}

int main()
{
    int n; // Jumlah proses
    cout << "Masukkan jumlah proses: ";
    cin >> n;

    vector<Process> processes(n);

    // Input data waktu burst proses
    for (int i = 0; i < n; ++i)
    {
        cout << "Masukkan waktu burst proses " << i + 1 << ": ";
        cin >> processes[i].burstTime;
    }

    int quantumTime;
    cout << "Masukkan quantum time: ";
    cin >> quantumTime;

    cout << endl;
    roundRobin(processes, quantumTime);

    return 0;
}
