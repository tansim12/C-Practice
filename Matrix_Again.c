#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
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

    // row fixed
    for (int j = 0; j < c; j++)
    {
        /* code */
        printf("%d ", arr[r - 1][j]);
    }

    printf("\n");

      // col fixed
    for (int j = 0; j < r; j++)
    {
        /* code */
        printf("%d ", arr[j][c-1]);
    }
    

    return 0;
}