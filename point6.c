#include <stdio.h>

int main() {
    int a[10];
    printf("&a = %p\n", &a);
    printf("a = %p\n", &a);
    printf("&a[0] = %p\n", &a[0]);
    printf("&a[1] = %p\n", &a[1]);
    return 0;
}
