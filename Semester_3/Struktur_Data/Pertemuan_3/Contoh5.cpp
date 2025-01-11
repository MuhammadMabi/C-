// Contoh 5: Struktur dengan Variabel Dinamis
#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct
{
    int No;
    int Nilai;
} strNode;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    
    strNode *P;
    P = (strNode *)malloc(sizeof(strNode));
    P->No = 25;
    P->Nilai = 87;
    cout << "No = " << P->No << endl;
    cout << "Nilai = " << P->Nilai << endl;
    free(P); // Membebaskan memori
    return 0;
}
