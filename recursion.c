// ! reverse recursion 
#include <stdio.h>

void hello(int x ,int n)
{
    printf("%d\n", x);
    if (x == n) return;
    hello(x + 1,n);
}
int main()
{
    int n;
    scanf("%d", &n);
    hello(1,n);
    return 0;
}


// #include <stdio.h>

// void hello(int i)
// {
//     if (i == 10) return;
//     hello(i + 1);
//     printf("%d\n", i);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     hello(n);
//     return 0;
// }



// #include <stdio.h>

// void arrayPrint(int n ,int arr[],int index){
//     if(index ==n) return;
//     printf("%d\n",arr[index]);
//         arrayPrint(n,arr,index+1);
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         scanf("%d",&arr[i]);
//     }
    
//     arrayPrint(n,arr,0);
//     return 0;
// }