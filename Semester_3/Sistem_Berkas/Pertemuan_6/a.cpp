#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to implement the LOOK Disk Scheduling algorithm
void LOOK(const vector<int> &requests, int head, string direction, vector<int> &seek_sequence, int &seek_count)
{
    vector<int> left, right;

    // Splitting requests into left and right of the head
    for (size_t i = 0; i < requests.size(); ++i)
    {
        int request = requests[i];
        if (request < head)
        {
            left.push_back(request);
        }
        else
        {
            right.push_back(request);
        }
    }

    // Sorting the left and right requests
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    // Process requests in the specified direction
    if (direction == "left")
    {
        // Process left first, then right
        for (int i = left.size() - 1; i >= 0; i--)
        {
            seek_sequence.push_back(left[i]);
        }
        for (size_t i = 0; i < right.size(); ++i)
        {
            seek_sequence.push_back(right[i]);
        }
    }
    else
    {
        // Process right first, then left
        for (size_t i = 0; i < right.size(); ++i)
        {
            seek_sequence.push_back(right[i]);
        }
        for (int i = left.size() - 1; i >= 0; i--)
        {
            seek_sequence.push_back(left[i]);
        }
    }

    // Calculate total seek count
    int current_position = head;
    for (size_t i = 0; i < seek_sequence.size(); ++i)
    {
        int track = seek_sequence[i];
        int distance = abs(track - current_position);
        seek_count += distance;
        current_position = track;
    }
}

// Function to print the LOOK seek sequence as a simple text-based visualization
void print_LOOK(const vector<int> &seek_sequence, int head)
{
    cout << "\nGraphical representation of the seek sequence:\n";

    // Display the initial head position
    cout << "Initial head position: " << head << "\n";
    cout << "Step -1: " << string(head / 2, '-') << "*" << " (" << head << ")\n";

    int step = 0;
    // Print the seek sequence step by step
    for (size_t i = 0; i < seek_sequence.size(); ++i)
    {
        int track = seek_sequence[i];
        cout << "Step " << step++ << ": " << string(track / 2, '-') << "*" << " (" << track << ")\n";
    }
    cout << "\n";
}

int main()
{
    // Request sequence
    int request_array[] = {176, 79, 34, 60, 92, 11, 41, 114};
    vector<int> requests(request_array, request_array + sizeof(request_array) / sizeof(request_array[0]));
    int head = 50;
    string direction = "right";

    vector<int> seek_sequence;
    int seek_count = 0;

    // Perform the LOOK algorithm
    LOOK(requests, head, direction, seek_sequence, seek_count);

    // Output the results
    cout << "\nSeek Sequence: ";
    for (size_t i = 0; i < seek_sequence.size(); ++i)
    {
        cout << seek_sequence[i] << " ";
    }
    cout << endl;
    cout << "Total number of seek operations: " << seek_count << endl;

    // Print a simple graphical representation of the seek sequence
    print_LOOK(seek_sequence, head);

    return 0;
}
