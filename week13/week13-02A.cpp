#include <stdio.h>
int main()
{
	char line[10];
	scanf("%s", line);
	if(line[0]==line[3] && line[1]==line[2]) printf("YES\n");
	else printf("NO\n");
}
