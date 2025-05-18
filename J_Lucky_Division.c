#include <stdio.h>


void fn(int n,int *count){
    if(n == 0) return;

    int last = n%10;
    if (last == 4 || last == 7)
    {
        
    }else {
        // (*count)++;
        *count = *count + 1;
    }
    int newNumber = n/10;
    
    fn(newNumber,count);
}

int main()
{
    int n ;
    scanf("%d",&n);
    int count =0;
    if (n%4 == 0 || n%7 == 0)
    {
        printf("YES");   
        return 0;
    }else {
          fn(n,&count);
    }
    if (count  == 0)
    {
        /* code */
        printf("YES");
    }else {
        printf("NO");

    }
    
    
    return 0;
}