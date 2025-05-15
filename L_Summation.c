#include <stdio.h>
void fn(int n, int arr[], int index, int *pointer)
{

    if (n == index)
        return;
    *pointer += arr[index];
    fn(n, arr, index + 1, pointer);
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
    int sum = 0;
    int *pointer = &sum;
    fn(n, arr, 0, pointer);
    printf("%d\n", sum);
    return 0;
}
