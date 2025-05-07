#include <stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int star2 = n;
    int space2 = 0;
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

    for (int i = n; i >= 1; i--)
    {
        star-=2;
        space++;
        /* code */
        for (int s = 1; s <= space; s++)
        {
            /* code */
            printf(" ");
        }
        for (int j = star; j >= 1; j--)
        {
            /* code */
            printf("*");
        }
        printf("\n");
       
        
        
    }
    
    
    return 0;
}