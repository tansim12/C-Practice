#include <stdio.h>

void fn(int x ,int n){
    
    printf("%d\n",x);
    if(x == n) return;
    fn(x+1,n);

}

int main()
{
    int n;
    scanf("%d",&n);
    fn(1,n);
    return 0;
}