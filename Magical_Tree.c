#include <stdio.h>

int main()
{
    int c;
    scanf("%d", &c);
    int r = 5;
    int n = (c + 1) / 2 + 5;
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++) // Line Loop
    {
        for (int s = space; s > 0; s--) // space Loop
        {
            /* code */
            printf(" ");
        }

        /* code */
        for (int j = 1; j <= star; j++) // star Loop
        {
            /* code */
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    for (int i = 0; i < r; i++) // nicher side Line Loop
    {
        /* code */

        for (int s = 0; s < n - (c / 2) - 1; s++) // nicher side space Loop
        {
            /* code */
            printf(" ");
        }

        for (int j = 0; j < c; j++)// nicher side star Loop
        {
            /* code */

            printf("*");
        }
        printf("\n");
    }

    return 0;
}
