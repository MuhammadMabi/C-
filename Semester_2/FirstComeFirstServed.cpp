// #include <iostream>
// #include <cstdlib> // for abs()

// using namespace std;

// const int ARRAY_SIZE = 8; // Specify the size of the array

// void FCFS(int arr[], int head)
// {
//     int seek_count = 0;
//     int distance, cur_track;

//     cout << "Seek Sequence is: ";

//     for (int i = 0; i < ARRAY_SIZE; i++) // Use ARRAY_SIZE instead of size
//     {
//         cur_track = arr[i];

//         // calculate absolute distance
//         distance = abs(cur_track - head);

//         // increase the total count
//         seek_count += distance;

//         // accessed track is now new head
//         head = cur_track;

//         // Print the track being accessed
//         cout << cur_track;
//         if (i < ARRAY_SIZE - 1)
//             cout << ", "; // Add comma if it's not the last track
//     }

//     cout << "\nTotal number of seek operations = " << seek_count << endl;
// }

// // Driver code
// int main()
// {
//     // request array
//     // int arr[ARRAY_SIZE] = {176, 79, 34, 60, 92, 11, 41, 114};
//     int head = 50;
//     int arr[ARRAY_SIZE] = {180, 69, 34, 60, 92, 10, 41, 114};
//     int head = 30;

//     FCFS(arr, head);

//     return 0;
// }

#include <iostream>
#include <cstdlib> // for abs()

using namespace std;

const int ARRAY_SIZE; // Specify the size of the array

void FCFS(int arr[], int head)
{
    int seek_count = 0;
    int distance, cur_track;

    cout << "Seek Sequence is: ";

    for (int i = 0; i < ARRAY_SIZE; i++) // Use ARRAY_SIZE instead of size
    {
        cur_track = arr[i];

        // calculate absolute distance
        distance = abs(cur_track - head);

        // increase the total count
        seek_count += distance;

        // accessed track is now new head
        head = cur_track;

        // Print the track being accessed
        cout << cur_track;
        if (i < ARRAY_SIZE - 1)
            cout << ", "; // Add comma if it's not the last track
    }

    cout << "\nTotal number of seek operations = " << seek_count << endl;
}

// Driver code
int main()
{
    // request array
    int arr[ARRAY_SIZE];
    int head;

    // Input array elements
    cout << "Enter " << ARRAY_SIZE << " track numbers:\n";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cin >> arr[i];
    }

    // Input initial head position
    cout << "Enter the initial head position: ";
    cin >> head;

    FCFS(arr, head);

    return 0;
}
