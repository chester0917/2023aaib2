#include <stdio.h>
int main()
{
    int a, b;
    printf("請輸入兩個整數");
    scanf("%d %d" , &a , &b);
    printf("你輸入了兩個數字, 直式加法:\n");
    printf("%5d\n", a);
    printf("%5d\n", b);
    printf("-------\n");
    printf("%5d\n", a+b );
}
