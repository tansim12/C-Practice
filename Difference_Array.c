#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int m;
        scanf("%d", &m);
        int arr[m], arr2[m], arr3[m];

        for (int i = 0; i < m; i++)
        {
            /* code */
            scanf("%d", &arr[i]);
            arr2[i] = arr[i]; // copy arr inside arr2
        }

        // reverse arr2
        for (int i = 0; i < m; i++)
        {
            /* code */
            for (int j = 0; j < m; j++)
            {
                /* code */
                if (arr2[i] < arr2[j])
                {
                    /* code */
                    int middle = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = middle;
                }
            }
        }

        // set new array value by calculate
        for (int i = 0; i < m; i++)
        {
            /* code */
            arr3[i] = abs(arr[i] - arr2[i]);
        }
        for (int i = 0; i < m; i++)
        {
            printf("%d ", arr3[i]);
        }
        printf("\n");
    }

    return 0;
}

// int m;
//         scanf("%d", &m);
//         int arr[m], arr2[m],arr3[m];

//         for (int i = 0; i < m; i++)
//         {
//             /* code */
//             scanf("%d", &arr[i]);
//             arr2[i] = arr[i];   // copy arr inside arr2
//         }

//         // reverse arr2
//         for (int i = 0; i < m; i++)
//         {
//             /* code */
//             for (int j = 0; j < m; j++)
//             {
//                 /* code */
//                 if (arr2[i] < arr2[j])
//                 {
//                     /* code */
//                     int middle = arr2[i];
//                     arr2[i] = arr2[j];
//                     arr2[j] = middle;
//                 }
//             }
//         }

//     // set new array value by calculate
//         for (int i = 0; i < m; i++)
//         {
//             /* code */
//             arr3[i] = abs(arr[i] - arr2[i]);
//         }
//         for (int i = 0; i < m; i++)
//         {
//             printf("%d ", arr3[i]);
//         }