#include <iostream>
#include <vector>
using namespace std;

// Function to find the waiting time for all processes
void findWaitingTime(vector<int>& processes, int n,
                     vector<int>& bt, vector<int>& wt, int quantum)
{
    vector<int> rem_bt(n); // Remaining burst times

    for (int i = 0; i < n; i++)
        rem_bt[i] = bt[i];

    int t = 0; // Current time

    while (true) {
        bool done = true;

        for (int i = 0; i < n; i++) {
            if (rem_bt[i] > 0) {
                done = false;

                if (rem_bt[i] > quantum) {
                    t += quantum;
                    rem_bt[i] -= quantum;
                }
                else {
                    t += rem_bt[i];
                    wt[i] = t - bt[i];
                    rem_bt[i] = 0;
                }
            }
        }

        if (done == true)
            break;
    }
}

// Function to calculate turn around time
void findTurnAroundTime(vector<int>& processes, int n,
                        vector<int>& bt, vector<int>& wt, vector<int>& tat)
{
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

// Function to calculate average time
void findavgTime(vector<int>& processes, int n, vector<int>& bt, int quantum)
{
    vector<int> wt(n, 0), tat(n, 0);
    int total_wt = 0, total_tat = 0;

    findWaitingTime(processes, n, bt, wt, quantum);
    findTurnAroundTime(processes, n, bt, wt, tat);

    cout << "Processes " << " Burst time " << " Waiting time " << " Turn around time\n";

    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << " " << processes[i] << "\t\t" << bt[i] << "\t "
             << wt[i] << "\t\t " << tat[i] << endl;
    }

    cout << "Average waiting time = " << (float)total_wt / (float)n << endl;
    cout << "Average turn around time = " << (float)total_tat / (float)n << endl;
}

int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<int> processes(n);
    vector<int> burst_time(n);

    cout << "Enter burst time for each process: ";
    for (int i = 0; i < n; ++i) {
        cin >> burst_time[i];
        processes[i] = i + 1; // Assigning process IDs
    }

    int quantum;
    cout << "Enter the time quantum: ";
    cin >> quantum;

    findavgTime(processes, n, burst_time, quantum);
    return 0;
}
