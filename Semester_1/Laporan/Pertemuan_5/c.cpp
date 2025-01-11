#include <stdio.h>

int main()
{
    int n = 1;

cetak:
    printf("C++ sangat mudah\n");

    if (n++ < 10)
        goto cetak;

    return 0;
}
