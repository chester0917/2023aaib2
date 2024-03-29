#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int star=i, space=n-i;

        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");

        printf("\n");
    }
}
