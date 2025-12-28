#include <stdio.h>
int main()
{
    int i = 1, j;
    while (i <= 3)
    {
        printf("Row %d:", i);
        i++;
        j = 1;
        while (j <= 5)
        {
            printf("%3d", j);
            j++;
        }
        printf("\n");
    }
    return 0;
}