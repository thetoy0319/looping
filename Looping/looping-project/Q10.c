#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n", n);
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}
