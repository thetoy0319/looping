#include <stdio.h>

int main() {
    int n, aaa;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    aaa = n;
    while (aaa >= 1) {
        printf("%d\n ", aaa);
        aaa--;
    }
    return 0;
}
