#include <stdio.h>

int main() {
    int i;
    int *p = &i;
    i = 987;
    printf("p=%p\n", p);
    printf("*p=%d\n", *p);
    return 0;
}
