#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    int pilihan;
    stack<int> s;
    queue<int> q;

    do
    {
        cout << "\nPilih operasi\n1 -> Stack\n2 -> Queue\n3 -> Exit\n";
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;

        if (pilihan == 1)
        {
            s.push(5);
            s.push(10);
            s.push(15);

            cout << "Isi Stack:\n";
            while (!s.empty())
            {
                cout << "Stack top: " << s.top() << endl;
                s.pop();
            }
        }
        else if (pilihan == 2)
        {
            q.push(5);
            q.push(10);
            q.push(15);

            cout << "Isi Queue:\n";
            while (!q.empty())
            {
                cout << "Queue front: " << q.front() << endl;
                q.pop();
            }
        }
        else if (pilihan == 3)
        {
            cout << "Keluar dari program.\n";
        }
        else
        {
            cout << "Pilihan anda tidak tersedia. Silakan coba lagi.\n";
        }
    } while (pilihan != 3);

    return 0;
}
