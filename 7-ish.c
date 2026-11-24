#include <stdio.h>

int countDigits(int n) {
    if (n < 10) return 1;
    return 1 + countDigits(n / 10);
}

int main() {
    printf("%d", countDigits(12345));
    return 0;
}
