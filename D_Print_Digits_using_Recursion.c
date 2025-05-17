#include <stdio.h>

void print_number(int number)
{

    if (number == 0)
    {
        return;
    }
    /* code */
    int last = number % 10;
    print_number(number / 10);
    printf("%d ", last);
}

void fn(int n, int arr[], int index)
{

    if (n == index)
    {
        /* code */
        return;
    }

    if (arr[index] == 0)
    {
        /* code */
        printf("%d", 0);
    }

    // printf("%d",index);
    print_number(arr[index]);
    printf("\n");
    fn(n, arr, index + 1);
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
    fn(n, arr, 0);

    return 0;
}