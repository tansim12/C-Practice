#include <stdio.h>

void fn(int n){
    for (int i = 1; i <= n; i++)
    {
        /* code */
        printf("%d ",i);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    fn(n);
    return 0;
}