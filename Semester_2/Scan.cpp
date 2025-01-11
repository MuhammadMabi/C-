#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to implement SCAN disk scheduling algorithm
void SCAN(vector<int> requests, int head, int direction, int size) {
    // Sort the requests
    sort(requests.begin(), requests.end());

    int seek_count = 0;
    int distance, current_track;

    vector<int> left, right;

    // Divide the requests into two groups: left and right of the initial head position
    for (int i = 0; i < requests.size(); i++) {
        if (requests[i] < head)
            left.push_back(requests[i]);
        if (requests[i] > head)
            right.push_back(requests[i]);
    }

    // Sort both groups according to their position
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int index;

    // If the direction is towards the right
    if (direction == 1) {
        // First serve the right side requests
        for (index = 0; index < right.size(); index++) {
            current_track = right[index];
            seek_count += abs(current_track - head);
            head = current_track;
        }
        // Then serve the left side requests
        seek_count += abs(head - size - 1);
        head = size - 1;
        for (index = left.size() - 1; index >= 0; index--) {
            current_track = left[index];
            seek_count += abs(current_track - head);
            head = current_track;
        }
    }
    // If the direction is towards the left
    else if (direction == 0) {
        // First serve the left side requests
        for (index = left.size() - 1; index >= 0; index--) {
            current_track = left[index];
            seek_count += abs(current_track - head);
            head = current_track;
        }
        // Then serve the right side requests
        seek_count += abs(head - 0);
        head = 0;
        for (index = 0; index < right.size(); index++) {
            current_track = right[index];
            seek_count += abs(current_track - head);
            head = current_track;
        }
    }

    cout << "Total number of seek operations = " << seek_count << endl;
}

int main() {
    vector<int> requests;
    int head, direction, size, request_count, request;

    // Input requests
    cout << "Enter the number of requests: ";
    cin >> request_count;
    cout << "Enter the requests: ";
    for (int i = 0; i < request_count; ++i) {
        cin >> request;
        requests.push_back(request);
    }

    // Input initial head position, direction, and disk size
    cout << "Enter the initial head position: ";
    cin >> head;
    cout << "Enter the direction (1 for right, 0 for left): ";
    cin >> direction;
    cout << "Enter the size of the disk: ";
    cin >> size;

    SCAN(requests, head, direction, size);

    return 0;
}
