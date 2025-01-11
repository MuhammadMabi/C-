#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);

    while (!q.empty())
    {
        cout << "Queue front: " << q.front() << endl;
        q.pop();
    }

    return 0;
}
