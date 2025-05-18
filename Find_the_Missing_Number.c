#include <stdio.h>

int main()
{
    int rc;
    scanf("%d", &rc);
   long long int arr[rc][4];
    for (int i = 0; i < rc; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            /* code */
            scanf("%lld", &arr[i][j]);
        }
    }

    for (int i = 0; i < rc; i++)
    {

        /* code */

        long long int multi = (long long)arr[i][1] * arr[i][2] * arr[i][3];
        if (arr[i][0] == 0)
        {
            /* code */
            printf("%d", 0);
        }

        else if (arr[i][0] % multi == 0)
        {
            /* code */
           long long int calc = arr[i][0] / multi;
            printf("%lld", calc);
        }
        else
        {
            printf("%d", -1);
        }

        printf("\n");
    }

    return 0;
}