#include <stdio.h>

int main() {
    int i = 0;
    printf("sizeof(int)=%d\n", sizeof(int));
    printf("sizeof(i)=%d\n", sizeof(i));
    printf("sizeof(&i)=%d\n", sizeof(&i));
    return 0;
}
