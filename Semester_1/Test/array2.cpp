#include <stdio.h>

int main()
{
    int a[2][5] = {{0, 1, 2, 3, 4}, {0, 1, 2, 3, 4}};
    int i, j;

    for (i = 0; i < 2; i++) // Loop for rows
    {
        for (j = 0; j < 5; j++) // Loop for columns
        {
            printf("%i", a[i][j]);
        }
    }

    return 0;
}