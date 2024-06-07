#include <stdio.h>
#include <string.h>
int main()
{
	int a1=0, a2=0, a3=0, a4=0, a5=0, a6=0;
	char s[200];
	scanf("%s", s);
	int N = strlen(s);
	for(int i=0; i<N; i++){
		if(s[i]=='1') a1++;
		if(s[i]=='2') a2++;
		if(s[i]=='3') a3++;
		if(s[i]=='4') a4++;
		if(s[i]=='5') a5++;
		if(s[i]=='6') a6++;
	}
	printf("1:%d\n", a1);
	printf("2:%d\n", a2);
	printf("3:%d\n", a3);
	printf("4:%d\n", a4);
	printf("5:%d\n", a5);
	printf("6:%d\n", a6);
}
