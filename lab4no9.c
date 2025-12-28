#include <stdio.h>

int main()
{
    int score;

    scanf("%d", &score);

    while (score != -1)
    {
        if (score >= 85)
            printf("%d (A)\n", score);
        else if (score >= 75)
            printf("%d (B)\n", score);
        else if (score >= 68)
            printf("%d (C)\n", score);
        else if (score >= 55)
            printf("%d (D)\n", score);
        else
            printf("%d (F)\n", score);

        scanf("%d", &score);
    }

    return 0;
}
