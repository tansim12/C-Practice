#include <stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int star = 1;
    int space = n-1;
    for (int i = 1; i <=n; i++)
    {
        for (int s = space; s>0; s--)
        {
            /* code */
            printf(" ");
        }
        
        /* code */
        for (int j = 1; j <=star; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
        
    }
    
    return 0;
}