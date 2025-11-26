#include <stdio.h>

int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
int main() {
    int x, y, g;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);

    if (x < 0) x = -x;
    if (y < 0) y = -y;
    g = GCD(x, y);
    printf("GCD of %d and %d is %d\n", x, y, g);
    return 0;
}
