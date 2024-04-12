#include <stdio.h>
#include <string.h>
int main()
{
    printf("請輸入你的英文名字: ");
    char s1[30]; ///字串宣告,也可以不給值
    scanf("%s", s1);
    char s2[30]="你好"; ///可在字串宣告時,給值
    printf("%s %s", s1, s2);

    s1[0]='A'; ///把名字的最前面字母,變成'A'字母
    printf("你的名字被改成 %s\n, s1");


    printf("你的英文名字的長度是 %d\n", strlen(s1));
}
