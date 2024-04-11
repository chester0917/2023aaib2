#include <stdio.h>
int main()
{
int a = 5;
while(a>0){
  printf("a是%d\n", a);
  a-=1; //新加的: 讓a慢慢變小
}
}
