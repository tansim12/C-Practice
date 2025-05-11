#include <stdio.h>
int count_before_one(int n, int arr[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == 1)
        {
            /* code */
            return count;
        }

        count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[1001];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

  int x =  count_before_one(n, arr);
  printf("%d",x);

    return 0;
}