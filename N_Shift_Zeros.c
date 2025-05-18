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
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = i+1; j < n; j++)
        {
            /* code */
           if (arr[i] == 0)
           {
            /* code */
             if (0<arr[j])
            {
                /* code */
                int middle = arr[i];
                arr[i] = arr[j];
                arr[j] = middle;
            }
           }
           
            
        }
        
    }

     for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}