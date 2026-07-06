#include<stdio.h>
#include<math.h>
int isPrime(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    for(int i = 3; i*i<=n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(void){
    double k;
    scanf("%lf",&k);
    for(int i=1;(pow(2,i)-1)<=k;i++)
    if(isPrime(i)==1&&isPrime(pow(2,i)-1)==1){
        unsigned int b = pow(2,i) - 1;
        printf("M(%d)=%d\n",i,b);
    }
    return 0;
}