
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j, len, maxLen = 1;
    int start = 0;

    printf("Enter a string: ");
    scanf("%999s", s);

    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        // Odd length palindrome
        int left = i, right = i;

        while (left >= 0 && right < len &&
               s[left] == s[right])
        {
            if (right - left + 1 > maxLen)
            {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;

        while (left >= 0 && right < len &&
               s[left] == s[right])
        {
            if (right - left + 1 > maxLen)
            {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }
    }

    printf("Longest Palindromic Substring: ");

    for (i = start; i < start + maxLen; i++)
    {
        printf("%c", s[i]);
    }

    printf("\nLength: %d\n", maxLen);

    return 0;
}
