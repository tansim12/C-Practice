#include <stdio.h>

void fn(int a ,int b){
    printf("%d",a+b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    fn(a,b);
    return 0;
}