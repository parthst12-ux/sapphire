#include <stdio.h>

int FIBO(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return FIBO(n - 1) + FIBO(n - 2);
}
int main() {
    int num, i;

    printf("Enter how many terms you want in Fibonacci sequence: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Number of terms should be positive.\n");
        return 0;
    }
    printf("Fibonacci sequence up to %d terms:\n", num);
    for (i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }
    printf("\n");
    return 0;
}
