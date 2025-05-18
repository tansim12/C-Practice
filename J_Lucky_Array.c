#include <stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int min = arr[0];
    for ( int i = 0; i < n; i++)
    {
        /* code */
        if (min >= arr[i])
        {
            /* code */
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (min == arr[i])
        {
            /* code */
            count++;
        }
        
    }

    if (count%2 == 0)
    {
        /* code */
        printf("Unlucky");
    }else {
        printf("Lucky");

    }
    
    
    
    
    return 0;
}