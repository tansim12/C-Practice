#include <stdio.h>

void fn(int n, int arr[], int index, int *big)
{
    if (n == index)
    {
        /* code */
        return;
    }
    //
    if (*big < arr[index])
    {
        *big = arr[index];
    }
    fn(n, arr, index + 1, big);
}


int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int big = arr[0];
    fn(n, arr, 0, &big);
    printf("%d",big);
    return 0;
}