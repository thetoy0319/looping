#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}
