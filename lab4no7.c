
#include <stdio.h>
int main()
{
    int c = 0, r = 0;
    char a;
    scanf("%c %d %d", &a, &c, &r);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
}