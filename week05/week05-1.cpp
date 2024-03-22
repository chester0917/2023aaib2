///week05-1.cpp
#include <stdio.h>
int main()
{
    ///int a, b;
        int a[4]; ///陳列宣告
        int b[4] = { 10,20,30,40}; ///宣告+初始值
        a[0] = 9;
        a[1] = 8;
        a[2] = 7;
        a[3] = 6;

        for(int i=0; i<4; i++){
        printf("i:%d a[i]:%d b[i]:%d\n", i, a[i], b[i]);
        }
}
