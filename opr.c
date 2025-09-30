#include <stdio.h>
int main() {
    int a, b, sum, diff, product, quotient;
        
         // a = first input number
         //b = second input number
    scanf("%d %d", &a, &b);

      sum = a + b;      
    diff = a - b;
    product = a * b;
    quotient = a / b;  // integer division

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", sum, diff, product, quotient);

    return 0;
}