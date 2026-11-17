#include <stdio.h>

int reverse(int x) {
    int reversed = 0;

    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return reversed;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reversed: %d\n", reverse(num));
    return 0;
}
