#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n");

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= 85)
        {
            printf("%d (A) \n", a[i]);
        }
        else if (a[i] >= 75)
        {
            printf("%d (B)\n", a[i]);
        }
        else if (a[i] >= 68)
        {
            printf("%d (C)\n", a[i]);
        }
        else if (a[i] >= 55)
        {
            printf("%d (D)\n", a[i]);
        }
        else
            printf("%d (F)\n", a[i]);
    }
}