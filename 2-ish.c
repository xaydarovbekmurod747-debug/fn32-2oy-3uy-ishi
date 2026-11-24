#include <stdio.h>

void printDesc(int n) {
    if (n == 0) return;
    printf("%d ", n);
    printDesc(n - 1);
}

int main() {
    printDesc(5);
    return 0;
}
