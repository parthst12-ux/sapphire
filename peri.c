#include <stdio.h>

int main() {
    int l1,b1,l2,b2,l3,b3;
    int p1,p2,p3, max;

    // Input lengths and breadths
    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%d %d",&l1,&b1);

    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%d %d",&l2,&b2);

    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%d %d",&l3,&b3);

    // Calculate perimeters
    p1 = 2*(l1 + b1);
    p2 = 2*(l2 + b2);
    p3 = 2*(l3 + b3);

    // Find maximum perimeter using ternary operator
   max = p1;           // assume p1 is biggest

if (p2 > max) {
    max = p2;       //  if p2 is bigger
}

if (p3 > max) {
    max = p3;       //  if p3 is bigger
}



// Print perimeters of all rectangles
printf("\nPerimeter of Rectangle 1 = %d", p1);
printf("\nPerimeter of Rectangle 2 = %d", p2);
printf("\nPerimeter of Rectangle 3 = %d", p3);

// Check which rectangle has the maximum perimeter
if (max == p1) {
    printf("\nRectangle 1 has the biggest perimeter = %d\n", max);
}
else if (max == p2) {
    printf("\nRectangle 2 has the biggest perimeter = %d\n", max);
}
else {
    printf("\nRectangle 3 has the biggest perimeter = %d\n", max);
}
  return 0;

}