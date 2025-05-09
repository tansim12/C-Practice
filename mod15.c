// ! pointer basic

// #include <stdio.h>

// int main()
// {
//     int n ;
//     scanf("%d",&n);

//     // pointer variable
//     int* pointer = &n;

//     // n value print
//     printf("value -> %d\n",*pointer);

//     // change value
//     *pointer = 1000;

//     // location file print by pointer variable
//     printf("location by pointer -> %p\n",pointer);

//     // location file print by n variable
//     printf("location by n  -> %p\n",n);

//      // n value print
//     printf("change value -> %d\n",*pointer);
//     return 0;
// }

// ! pass by reference
// #include <stdio.h>

// void fn(int* pointer){
//     printf("pointer location -> %p\n",pointer);

//     // pointer previous value change .
//     *pointer = 100000;
// }
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     fn(&x);

//     printf("change x value -> %d\n",x);

//     return 0;
// }


// ! array parameter pass by reference 
// #include <stdio.h>

// void fn(int arr[])
// {
//     arr[0] = 100000;
// }

// int main()
// {
//     int arr[5] = {10, 2, 6, 9, 3};
//     // printf("0 index -> %p\n",&arr[0]);
//     // printf("1 index -> %p\n",&arr[1]);
//     // printf("2 index -> %p\n",&arr[2]);
//     // printf("3 index -> %p\n",&arr[3]);

//     fn(arr);
    
//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
// }


#include <stdio.h>

void fn(char str[])
{
    str[0] = 'x';
}

int main()
{
    char str[5] = "abcde";
    // printf("0 index -> %p\n",&arr[0]);
    // printf("1 index -> %p\n",&arr[1]);
    // printf("2 index -> %p\n",&arr[2]);
    // printf("3 index -> %p\n",&arr[3]);

    fn(str);
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%c ",str[i]);
    }
    
    return 0;
}