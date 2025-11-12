
#include <stdio.h>

void swap_ints(int *a, int *b) {
    
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void point_to_next_char(char **p) {

    if (p && *p) {
        (*p)++; 
    }
}
int main(void) {
    int x = 5, y = 99;
    printf("Before swap: x=%d (addr %p), y=%d (addr %p)\n", x, (void*)&x, y, (void*)&y);
    swap_ints(&x, &y);
    printf("After swap:  x=%d, y=%d\n\n", x, y);
    char msg[] = "hello";
    char *p = msg;
    printf("Original pointer p -> %p, *p = '%c', string = \"%s\"\n", (void*)p, *p, p);
    point_to_next_char(&p);
    printf("After point_to_next_char(&p): p -> %p, *p = '%c', string now = \"%s\"\n", (void*)p, *p, p);
    
    return 0;
}
  