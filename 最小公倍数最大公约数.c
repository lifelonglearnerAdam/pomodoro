/********** Begin **********/
#include<stdio.h>
int main(){
    int a, b;
    int original_a, original_b; 
    int temp, gcd, lcm;
    
    scanf("%d,%d", &a, &b);
    
    original_a = a;
    original_b = b;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    gcd = a;  
    
    lcm = original_a * original_b/gcd;
    
    printf("%d %d\n", gcd, lcm);
    return 0;
}





/**********  End **********/
