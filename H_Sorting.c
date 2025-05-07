#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[101];
    for (int i = 0; i <n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j= i+1; j <= n-1; j++)
        {
            /* code */
            if (arr[i]>arr[j])
            {
                /* code */
                int mid = arr[i];
                arr[i]=arr[j];
                arr[j]=mid;
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