#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int s = space; s > 0; s--)
        {
            /* code */
            printf(" ");
        }

        for (int j = count; j >= 1; j--)
        {
          printf("%d",j);
        }
        printf("\n");
        space--;
        count++;
        
    }

       return 0;
}