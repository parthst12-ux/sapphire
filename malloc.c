#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int *arr;
    arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    
}
int x;

for (int i = 0 ; i<n/2 ; i++){
    x= arr[i];
    arr[i]= arr[n-i-1];
    arr[n-i-1]=x;
}
printf("Reversed array:\n");
for (int i = 0; i < n; i++){
    printf("%d ", arr[i]);
}
free(arr);
    return 0;
}
