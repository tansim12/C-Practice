#include <stdio.h>

int main()
{
    int n ; 
    scanf("%d",&n);
    int star = 1;
    int space = n-1;

    for (int i = 0; i < n; i++)
    {
        for (int s = 1; s <=space; s++)
        {
            /* code */
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
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