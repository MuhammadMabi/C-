#include <iostream>
#include <deque>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    
    deque<int> queue;

    queue.push_back(5);
    queue.push_back(4);
    queue.push_back(3);
    queue.push_back(2);
    queue.push_back(1);

    while (!queue.empty())
    {
        cout << "Elemen yang dihapus: " << queue.back() << endl;
        queue.pop_back();

        cout << "Isi antrian sekarang: ";
        for (deque<int>::iterator it = queue.begin(); it != queue.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    cout << "Antrian kosong." << endl;

    return 0;
}
