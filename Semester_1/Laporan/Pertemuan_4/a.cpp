#include <stdio.h>
int main()
{
    int kdhari;
    printf("Masukan kode hari * 1 - 7 + :");
    scanf("%d", &kdhari);
    switch (kdhari)
    {
    case 1:
        printf("Senin");
        break;
    case 2:
        printf("Selasa");
        break;
    case 3:
        printf("Rabu");
        break;
    case 4:
        printf("Kamis");
        break;
    case 5:
        printf("Jum’at");
        break;
    case 6:
        printf("Sabtu");
        break;
    case 7:
        printf("Minggu");
        break;
    default:
        printf("Kode Tidak ada");
    }
}
