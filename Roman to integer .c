#include <stdio.h>
#include <string.h>
int value(char r) {
    switch (r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return -1;
    }
}
int romanToInt(const char *s) {
    int total = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int current = value(s[i]);
        if (current == -1) return -1;
        if (i + 1 < len) {
            int next = value(s[i + 1]);
            
            if (current < next) {
                total -= current;
            } else {
                total += current;
            }
        } else {
            total += current;
        }
    }

    return total;
}

int main() {
    char roman[20];

    printf("Enter a Roman numeral (e.g., MCMXCIV): ");
    scanf("%19s", roman);

    int result = romanToInt(roman);

    if (result != -1) {
        printf("Integer value: %d\n", result);
    } else {
        printf("Invalid Roman numeral entered.\n");
    }

    return 0;
}
