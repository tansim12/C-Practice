#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int hash = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int s = 1; s <= space; s++)
        {
            /* code */
            printf(" ");
        }

        for (int j = 1; j <= hash; j++)
        {
            /* code */
            if (i % 2 == 0)
            {
                /* code */
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        hash += 2;
        space--;
    }

    int hashCount = hash;

    for (int i = n; i >= 1; i--)
    {
        /* code */
        hash -= 2;
        space++;
        for (int s = 0; s < space; s++)
        {
            /* code */
            printf(" ");
        }
        for (int j = hash; j >= 1; j--)
        {
            if (hash + 2 != hashCount)
            {
                /* code */
                if (i % 2 == 0)
                {
                    /* code */
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
        }
        if (hash + 2 != hashCount)
        {
            printf("\n");
        }
    }

    return 0;
}