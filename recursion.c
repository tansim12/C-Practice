#include <stdio.h>

void hello(int i)
{
    printf("%d", i);
    if (i < 5)
        hello(i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    hello(n);
    return 0;
}