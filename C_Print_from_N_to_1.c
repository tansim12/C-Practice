#include <stdio.h>

void fn(int x ,int n){
    
    if(x > n) return;
    fn(x+1,n);
    if (x == 1)
    {
        /* code */
        printf("%d",1);
        return;
    }
    
    printf("%d ",x);

}

int main()
{
    int n;
    scanf("%d",&n);
    fn(1,n);
    return 0;
}