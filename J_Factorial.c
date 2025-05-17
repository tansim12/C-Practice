#include <stdio.h>

void fn(int *calc ,int n,int x){
     if (x > n )
     {
        /* code */
        return;
     }
     (*calc)*= x;
     fn(calc,n,x+1);
     
}

int main()
{
    int n ;
    scanf("%d",&n);
    int x = 1;
    int calc = x;
    fn(&calc,n,x);
    printf("%d",calc);
    return 0;
}