#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void SCAN(int arr[], int size, int head, string direction, int disk_size) {
    int seek_count = 0;
    int distance, cur_track;
    vector<int> left, right;
    vector<int> seek_sequence;

    // Append end values to be visited
    if (direction == "left") {
        left.push_back(0);
    } else {
        right.push_back(disk_size - 1);
    }

    // Fill left and right vectors based on head position
    for (int i = 0; i < size; i++) {
        if (arr[i] < head) {
            left.push_back(arr[i]);
        } else {
            right.push_back(arr[i]);
        }
    }

    // Sort left and right vectors
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    // Scanning left and right of the head
    int run = 2; // Run twice
    while (run--) {
        if (direction == "left") {
            for (int i = left.size() - 1; i >= 0; i--) {
                cur_track = left[i];
                seek_sequence.push_back(cur_track);
                distance = abs(cur_track - head);
                seek_count += distance;
                head = cur_track;
            }
            direction = "right"; // Change direction
        } else {
            for (int i = 0; i < right.size(); i++) {
                cur_track = right[i];
                seek_sequence.push_back(cur_track);
                distance = abs(cur_track - head);
                seek_count += distance;
                head = cur_track;
            }
            direction = "left"; // Change direction
        }
    }

    // Output results
    cout << "Total number of seek operations = " << seek_count << endl;
    cout << "Seek Sequence is: " << endl;
    for (int i = 0; i < seek_sequence.size(); i++) {
        cout << seek_sequence[i] << endl;
    }
}

void printGanttChart(const vector<int>& seek_sequence, int initial_head) {
    cout << "Gantt Chart: " << initial_head;
    for (int track : seek_sequence) {
        cout << " -> " << track;
    }
    cout << endl;
}

int main() {
    // Request array
    int arr[] = {130, 65, 70, 20, 10, 150, 180, 40, 91}; // Last element as per your instruction
    int size = sizeof(arr) / sizeof(arr[0]);
    int initial_head1 = 100; // Initial head position 100
    int initial_head2 = 50;  // Initial head position 50
    string direction = "left"; // Initial direction
    int disk_size = 200; // Disk size

    // Calculate for initial head position 100
    cout << "Initial head position: " << initial_head1 << endl;
    vector<int> seek_sequence1;
    SCAN(arr, size, initial_head1, direction, disk_size);
    printGanttChart(seek_sequence1, initial_head1);

    cout << endl;

    // Calculate for initial head position 50
    cout << "Initial head position: " << initial_head2 << endl;
    vector<int> seek_sequence2;
    SCAN(arr, size, initial_head2, direction, disk_size);
    printGanttChart(seek_sequence2, initial_head2);

    return 0;
}
