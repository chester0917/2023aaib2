#include <stdio.h>
int main()
{
        if('A'==65) printf("字母A竟然和65相等\n");
        printf("字母%c的值是:%d\n", 65, 'A');
        printf("字母%c的值是:%d\n", 66, 'B');
        printf("字母%c的值是:%d\n", 67, 'C');
        printf("\n");
        printf("字母%c的值是:%d\n", 97, 'a');
}

