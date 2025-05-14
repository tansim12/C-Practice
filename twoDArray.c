//! 2D array print
// #include <stdio.h>

// int main()
// {
//     // int arr[2][3] = {{2, 3, 5}, {3, 10, 9}};

//     int r, c;
//     scanf("%d %d", &r, &c);
//     int arr[r][c];
//     for (int i = 0; i < r; i++)
//     {

//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < r; i++)
//     {

//         for (int j = 0; j < c; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// !print row element
// #include <stdio.h>

// int main()
// {
//     // int arr[2][3] = {{2, 3, 5}, {3, 10, 9}};

//     int r, c;
//     scanf("%d %d", &r, &c);
//     int arr[r][c];
//     for (int i = 0; i < r; i++)
//     {

//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int printRowNumber;
//     int printColumnNumber;
//     scanf("%d %d",&printRowNumber,&printColumnNumber);

//      for (int j = 0; j < c; j++)
//         {
//             // print specific row
//             printf("%d ", arr[printRowNumber][j]);
//         }
//         printf("\n");

//      for (int j = 0; j < r; j++)
//         {
//             // print specific column
//             printf("%d ", arr[j][printColumnNumber]);
//         }
//         printf("\n");

//     return 0;
// }

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

    if (r == 1)
    {
        /* code */
        printf("Row matrix");
    }
    else
    {
        printf("Row matrix na");
    }

    printf("\n");

    if (c == 1)
    {
        /* code */
        printf("Column matrix");
    }
    else
    {
        printf("Column matrix na");
    }

    printf("\n");

    int isZeroMatrix = 0;
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] != 0)
            {
                /* code */
                isZeroMatrix = 1;
            }
        }
    }
    if (isZeroMatrix == 0)
    {
        /* code */
        printf("Zero Matrix");
    }
    else
    {
        printf("Zero Matrix na");
    }
    printf("\n");

    // diagonal matrix

    int isDiagonalCount = 0;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {

            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    // diagonal value print here    
                }
                else
                {
                    // outside of diagonal
                    if (arr[i][j] != 0)
                    {
                        /* code */
                        isDiagonalCount++;
                    }
                }
            }
            printf("\n");
        }

        if (isDiagonalCount ==0)
        {
            /* code */
            printf("Diagonal Matrix");
        }
        else
        {
            printf("Diagonal Matrix na");
            /* code */
        }
        
    }
    else
    {
        printf("Diagonal Matrix na");
    }

    return 0;
}