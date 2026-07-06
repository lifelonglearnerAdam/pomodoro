#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main()
{
    int a, b;
    a = 3;
    b = 4;
    int c = max(a, b);
    printf("Hello, World!\n");
    // getchar();
    return 0;
}