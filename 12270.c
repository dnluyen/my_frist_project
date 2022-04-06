#include<stdio.h>
#include<math.h>

int main(){
    int a, b, sum, sum1;
    float avg;
    printf("\nNhap a & b: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    avg = (float)(a+b)/2;
    sum1 =  a*a + b*b;
    printf("\nsum(a+b)=%d\n", sum);
    printf("\navg(a&b)=%f\n", avg);
    printf("\nsumsqrt(a&b)=%d\n", sum1);


}


