// #include <stdio.h>

// int main()
// {
//     int n ;
//     scanf("%d",&n);
//     int value = 1;
//     int space = n-1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int s = 1; s <=space; s++)
//         {
//             /* code */
//             printf(" ");
//         }
//         for (int j = 1; j <= value; j++)
//         {
//             /* code */
//             printf("%d ",j);
//         }
//         printf("\n");
//         value++;
//         space--;

//     }

//     return 0;
// }


// ! sum of two value answer is x 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int value1;
    int value2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            /* code */
            if (arr[i] + arr[j] == 8)
            {
                /* code */
                value1 = arr[j];
                value2 = arr[i];
            }
        }
    }
    printf("%d %d",value1,value2);

    return 0;
}