#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	scanf("%s", s);
	int N = strlen(s);
	for(int i=0; i<N; i++){
		char c = s[i];
		if(c>='A' && c<='Z') c = c - 'A' + 'a';
		else if(c>='a' && c<='z') c = c - 'a' + 'A';
		printf("%c", c);
	}
	printf("\n");
}
