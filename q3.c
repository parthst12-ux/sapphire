#include <stdio.h>

int ISPRIME(int n) {
    int i;

    if (n <= 1)
        return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int low, high, i;

    printf("Enter lower and upper range: ");
    scanf("%d%d", &low, &high);
    printf("Prime numbers between %d and %d are:\n", low, high);
    for (i = low; i <= high; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
