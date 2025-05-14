//! 2D array
#include <stdio.h>

int main()
{
    // int arr[2][3] = {{2, 3, 5}, {3, 10, 9}};

    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("%d", arr[1][0]);
    return 0;
}