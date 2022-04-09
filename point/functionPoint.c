#include <stdio.h>

int max(int x, int y) {
    printf("max .... ");
    return 0;
}

int main() {
    //int max(int, int);
    int (*p)(int, int);
    p = max;
    (*p)(1, 2);
    return 0;
}

