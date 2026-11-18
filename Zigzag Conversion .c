
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], result[100];
    int rows, len, i, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    len = strlen(str);

    if (rows == 1 || rows >= len)
    {
        printf("Zigzag String: %s", str);
        return 0;
    }

    for (i = 0; i < rows; i++)
    {
        int index;
        int cycle = 2 * rows - 2;

        for (int k = 0; k + i < len; k += cycle)
        {
            index = k + i;
            result[j++] = str[index];

            if (i != 0 && i != rows - 1)
            {
                index = k + cycle - i;

                if (index < len)
                    result[j++] = str[index];
            }
        }
    }

    result[j] = '\0';

    printf("Zigzag String: %s", result);

    return 0;
}
