
#include <stdio.h>
#include <stddef.h> 

int main(void) {
    int iarr[] = {10, 20, 30, 40};
    float farr[] = {1.0f, 2.5f, 3.75f};
    char carr[] = "ABC";
    int *ip = iarr;     
    float *fp = farr;   
    char *cp = carr;   
    printf("Pointer arithmetic on int array:\n");
    for (int i = 0; i < 4; ++i) {
        printf("  ip + %d = %p -> *(ip + %d) = %d (sizeof(int) = %zu)\n",
               i, (void*)(ip + i), i, *(ip + i), sizeof(int));
    }
    printf("\nPointer arithmetic on float array:\n");
    for (int i = 0; i < 3; ++i) {
        printf("  fp + %d = %p -> *(fp + %d) = %.2f (sizeof(float) = %zu)\n",
               i, (void*)(fp + i), i, *(fp + i), sizeof(float));
    }
    printf("\nPointer arithmetic on char array (characters and bytes):\n");
    for (int i = 0; i < 4; ++i) { 
        printf("  cp + %d = %p -> *(cp + %d) = '%c' (sizeof(char) = %zu)\n",
               i, (void*)(cp + i), i, *(cp + i), sizeof(char));
    }
    printf("\nNow increment ip and fp by 1 and show addresses & values:\n");
    printf("  original ip = %p, *ip = %d\n", (void*)ip, *ip);
    ip++; 
    printf("  after ip++ = %p, *ip = %d\n", (void*)ip, *ip);
    printf("  original fp = %p, *fp = %.2f\n", (void*)fp, *fp);
    fp += 2; 
    printf("  after fp += 2 = %p, *fp = %.2f\n", (void*)fp, *fp);
    return 0;
}
