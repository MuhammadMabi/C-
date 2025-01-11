#include <iostream>
#include <stack>
#include <string>
using namespace std;

string balikKalimat(const string &kalimat)
{
    stack<char> s;
    string kalimatTerbalik = "";

    for (char c : kalimat)
    {
        s.push(c);
    }

    while (!s.empty())
    {
        kalimatTerbalik += s.top();
        s.pop();
    }

    return kalimatTerbalik;
}

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    string kalimatTerbalik = balikKalimat(kalimat);

    cout << "Kalimat setelah dibalik: " << kalimatTerbalik << endl;

    return 0;
}
