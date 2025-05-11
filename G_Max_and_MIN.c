#include <stdio.h>

void fn(int n, int arr[])
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (max <= arr[i])
        {
            /* code */
            max = arr[i];
        }
        if (min >= arr[i])
        {
            /* code */
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100001];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }
    fn(n, arr);

    return 0;
}