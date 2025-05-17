#include <stdio.h>
#include <string.h>

void count_fn(int *count, char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        (*count)++;
    }
}

void fn(int *count, char str[], int index)
{
    // printf("%s",str);
    if (index == strlen(str))
    {
        /* code */
        return;
    }
    count_fn(count, str[index]);
    fn(count, str, index + 1);
}
int main()
{
    char str[201];
    fgets(str, sizeof(str), stdin);
    scanf("%s", &str);
    int count = 0;
    fn(&count, str, 0);
    printf("%d", count);
    return 0;
}