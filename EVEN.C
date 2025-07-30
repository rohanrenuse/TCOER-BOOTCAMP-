#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of even numbers to print: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("%d\n", 2*i);
    }

    return 0;
}
