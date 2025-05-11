#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int length = strlen(str);
    
    int firstIndex = 0;
    int lastIndex = length - 1;
    int count = 0;
    while (firstIndex < lastIndex)
    {
        if (str[firstIndex] != str[lastIndex])
        {
          return 0;
        }else {

            count++;
        }
        firstIndex++;
        lastIndex--;
    }
    if (count == length/2)
    {
        /* code */
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[1001];
    scanf("%s", &str);
    int value = is_palindrome(str);
    // printf("%d",value);
    if (value == 1)
    {
        /* code */
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}