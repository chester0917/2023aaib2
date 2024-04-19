#include <stdio.h>
int myAdd(int a, int b){
    return a+b;
}
void myPrint(int a){
    for(int i=1; i<=a; i++) printf("*");
    printf("\n");
}
int main()
{
    int ans = myAdd(3, 4);
    printf("Hello ans: %d\n", ans);
    myPrint(ans);
}
