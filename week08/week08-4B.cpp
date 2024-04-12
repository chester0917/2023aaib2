#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("請輸入蝸牛欲爬行的高度：");
	//your code

	scanf("%d", &h);
	while(h>0){
		day++;
		h -= 5;
		if(h<0) break;
		h += 2;
	}
    printf("%d天可爬到頂端",day);
}
