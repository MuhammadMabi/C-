#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void LOOK(const vector<int> &requests, int head, string direction, vector<int> &seek_sequence, int &seek_count)
{
    vector<int> left, right;

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

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    if (direction == "left")
    {
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
        for (size_t i = 0; i < right.size(); ++i)
        {
            seek_sequence.push_back(right[i]);
        }
        for (int i = left.size() - 1; i >= 0; i--)
        {
            seek_sequence.push_back(left[i]);
        }
    }

    int current_position = head;
    for (size_t i = 0; i < seek_sequence.size(); ++i)
    {
        int track = seek_sequence[i];
        int distance = abs(track - current_position);
        seek_count += distance;
        current_position = track;
    }
}

void print_LOOK(const vector<int> &seek_sequence, int head)
{
    cout << "\nGraphical representation of the seek sequence:\n";

    cout << "Initial head position: " << head << "\n";
    cout << "Step -1: " << string(head / 2, '-') << "*" << " (" << head << ")\n";

    int step = 0;
    for (size_t i = 0; i < seek_sequence.size(); ++i)
    {
        int track = seek_sequence[i];
        cout << "Step " << step++ << ": " << string(track / 2, '-') << "*" << " (" << track << ")\n";
    }
    cout << "\n";
}

int main()
{
    int request_array[] = {10, 79, 134, 60, 92, 111, 41, 23, 14};
    vector<int> requests(request_array, request_array + sizeof(request_array) / sizeof(request_array[0]));
    int head = 100;
    string direction = "right";

    vector<int> seek_sequence;
    int seek_count = 0;

    LOOK(requests, head, direction, seek_sequence, seek_count);

    cout << "\nSeek Sequence: ";
    for (size_t i = 0; i < seek_sequence.size(); ++i)
    {
        cout << seek_sequence[i] << " ";
    }
    cout << endl;
    cout << "Total number of seek operations: " << seek_count << endl;

    print_LOOK(seek_sequence, head);

    return 0;
}
