
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int num;

    printf("Enter a string: ");
    scanf("%s", str);

    num = atoi(str);

    printf("Integer value = %d", num);

    return 0;
}
