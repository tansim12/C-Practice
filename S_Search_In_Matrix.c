#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        /* code */
        for (int j = 0; j < c; j++)
        {
            /* code */
            scanf("%d", &arr[i][j]);
        }
    }

    int findValue;
    scanf("%d", &findValue);
    bool isExist = false;
    for (int i = 0; i < r; i++)
    {
        /* code */
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == findValue)
            {
                /* code */
                isExist = true;
            }
        }
    }

    if (isExist)
    {
        /* code */
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}