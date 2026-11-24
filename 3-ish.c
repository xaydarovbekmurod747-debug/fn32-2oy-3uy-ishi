#include <stdio.h>

int sumN(int n) {
    if (n == 0) return 0;
    return n + sumN(n - 1);
}

int main() {
    printf("%d", sumN(5));
    return 0;
}
