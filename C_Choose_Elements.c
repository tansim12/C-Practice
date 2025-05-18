#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
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
            if (arr[i]<arr[j])
            {
                /* code */
                int middle = arr[i];
                arr[i] = arr[j];
                arr[j]  = middle;
            }
            
        }    
        
    }

   long long int sum = 0;
     for (int i = 0; i < k; i++)
        {
            if (arr[i] > 0)
            {
            sum+=arr[i];
            }
            
        
           
        }
        if (sum < 0)
        {
            /* code */
            printf("%d",0);
        }else {
            printf("%lld",sum);
        }

    return 0;
}