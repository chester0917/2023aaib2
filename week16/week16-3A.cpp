#010
#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	scanf("%s", s);
	int N = strlen(s);
	int bad = 0;
	for(int i=0; i<N; i++){
		if(s[i]!=s[N-1-i]){
			bad = 1;
		}
	}
	if(bad==1) printf("NO");
	else printf("YES");
}
