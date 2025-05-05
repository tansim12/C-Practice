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

    int x;
    scanf("%d", &x);
    int value1;
    int value2;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            /* code */
            if (arr[i] + arr[j] == x)
            {
                /* code */
                value1 = arr[i];
                value2 = arr[j];
                flag = 1;
                printf("Yes\n");
            }
        }
    }

    if (flag == 0)
    {
        printf("No\n");
    }
    else
    {

        printf("%d %d \n", value1, value2);
    }

    return 0;
}