#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);
    int arr[1001];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] % 2 == 0)
        {
            /* code */
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
}
int main()
{

    odd_even();

    return 0;
}