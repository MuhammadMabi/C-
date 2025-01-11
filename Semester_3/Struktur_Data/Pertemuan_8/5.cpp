#include <iostream>
#include <deque>
using namespace std;

void fillQueueFromRight(deque<int> &dq, int maxRecords)
{
    int recordCount = 0, element;

    while (recordCount < maxRecords && dq.size() < maxRecords)
    {
        cout << "Enter element " << (recordCount + 1) << ": ";
        cin >> element;
        dq.push_back(element);

        recordCount++;
    }

    if (dq.size() == maxRecords)
    {
        cout << "Queue is full. Stopping insertion." << endl;
    }
}

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    
    deque<int> dq;
    int maxRecords = 10;

    fillQueueFromRight(dq, maxRecords);

    cout << "Queue contents after filling: ";
    for (size_t i = 0; i < dq.size(); ++i)
    {
        cout << dq[i] << " ";
    }
    cout << endl;

    return 0;
}
