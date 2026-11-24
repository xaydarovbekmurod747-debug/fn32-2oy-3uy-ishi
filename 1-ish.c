#include <stdio.h>

void printAsc(int n) {
    if (n == 0) return;
    printAsc(n - 1);
    printf("%d ", n);
}

int main() {
    printAsc(5);
    return 0;
}
