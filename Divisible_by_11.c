

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char arr[101];
    scanf("%s", &arr);
    int oddNumberSum = 0;
    int evenNumberSum = 0;
    int length = strlen(arr);
    int numberArr[length];

    for (int i = 0; i < length; i++)
    {
        /* code */
        numberArr[i] = arr[i] - '0';
    }

    for (int i = 0; i < length; i++)
    {
        /* code */
        if ((i + 1) % 2 == 0)
        {
            /* code */
            evenNumberSum += numberArr[i];
        }
        else
        {
            oddNumberSum += numberArr[i];
        }
    }

    int calc = abs(oddNumberSum - evenNumberSum);

    if (calc % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}