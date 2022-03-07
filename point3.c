#include <stdio.h>

int main() {
    char a[] = {'a', 'b'};
    char *p = &a[0];
    int *i;
    i = p;
printf("p=%p\n", p);

    printf("i=%p\n", i);
    printf("%d\n", *i);
    return 0;
}
