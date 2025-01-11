#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    
    string inputString;
    string reversedString = "";

    cout << "Masukkan string: ";
    getline(cin, inputString);

    for (int i = inputString.length() - 1; i >= 0; i--)
    {
        reversedString += inputString[i];
    }

    cout << "Hasil setelah dibalik: " << reversedString << endl;

    return 0;
}
