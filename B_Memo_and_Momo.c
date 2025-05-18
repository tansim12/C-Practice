#include <stdio.h>

int main()
{
    int n = 3;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%lld",&arr[i]);
    }

    if (arr[0]%arr[2]==0 && arr[1]%arr[2] == 0)
    {
        /* code */
        printf("Both");
    } else if (arr[0]%arr[2] == 0 && arr[1]%arr[2] != 0)
    {
        /* code */
        printf("Memo");
    }else if (arr[1]%arr[2] == 0 && arr[0]%arr[2] != 0)
    {
        /* code */
        printf("Momo");
    }else {
        printf("No One");
    }
    
    
    
    
    return 0;
}