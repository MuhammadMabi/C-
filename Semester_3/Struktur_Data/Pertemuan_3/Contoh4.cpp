// Contoh 4: Variabel Dinamis
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    
    int *P;
    P = (int *)malloc(sizeof(int));
    *P = 25;
    cout << *P << endl;
    free(P); // Membebaskan memori
    return 0;
}
