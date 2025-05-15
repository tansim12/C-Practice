#include <stdio.h>
#include <math.h>

int main()
{
    int rc;
    scanf("%d", &rc);
    int arr[rc][rc];
    for (int i = 0; i < rc; i++)
    {
        /* code */
        for (int j = 0; j < rc; j++)
        {
            /* code */
            scanf("%d", &arr[i][j]);
        }
    }

    int primarySum =0;
    int secondarySum =0;


    for (int i = 0; i < rc; i++)
    {
        /* code */
        for (int j = 0; j < rc; j++)
        {
            /* code */
            if (i == j)
            {
                /* code */
                primarySum+=arr[i][j];
            }  if (i+j == rc -1)
            {
                secondarySum+=arr[i][j];
                /* code */
            }
            
        }
    }

    int calc = abs(primarySum - secondarySum);
    
    printf("%d",calc);

    return 0;
}