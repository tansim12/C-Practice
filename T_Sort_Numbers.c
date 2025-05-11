#include <stdio.h>

void fn(int n , int arr[],int copyArr[]){
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if (arr[i] > arr[j])
            {
                /* code */
                int mid = arr[i];
                arr[i] = arr[j];
                arr[j] = mid;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\n",arr[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\n",copyArr[i]);
    }
    
    
}
int main()
{
    int n =3 ;
    int arr[100001];
    int copyArr[100001];

    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        copyArr[i]=arr[i];
    }
    
    fn(n,arr,copyArr);
    return 0;
}