#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int star = n;
    for (int i = n; i >= 1; i--)
    {
        /* code */
        for (int j = star; j >= 1; j--)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        star--;
        
    }
    
    return 0;
}