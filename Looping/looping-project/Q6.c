#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    i = n;
    while (i >= 1) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i--;
    }
    return 0;
}
