#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    if (r != c)
    {
        printf("NO");
        return 0;
    }

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        /* code */
        for (int j = 0; j < c; j++)
        {
            /* code */
            scanf("%d", &arr[i][j]);
        }
    }
    bool isJadu = true;

    for (int i = 0; i < r; i++)
    {
        /* code */
        for (int j = 0; j < c; j++)
        {
            // primary diagonal
            if (i == j)
            {
                /* code */

                if (arr[i][j] != 1)
                {
                    /* code */
                    isJadu = false;
                }
            }
            else
                // secondary diagonal
                if (i + j == c - 1)
                {
                    /* code */
                    if (arr[i][j] != 1)
                    {
                        /* code */
                        isJadu = false;
                    }
                }
                else
                {

                    if (arr[i][j] != 0)
                    {
                        /* code */
                        isJadu = false;
                    }
                }
        }
    }

    if (isJadu)
    {
        /* code */
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}