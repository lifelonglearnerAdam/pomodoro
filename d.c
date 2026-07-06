#include<stdio.h>
int main(){
    unsigned short x, m, n;
    scanf("%hx %hu %hu",&x,&m,&n);
    x = ((1<<n)-1)<<m&x;
    x = x<<(16-m-n);
    printf("%x",x);
    getchar();
    return 0;
}