///week13-2B.cpp
///Q1: 有多長? Q2: 怎麼判斷
#include <string.h>
#include <stdio.h>
int main()
{
    char line[20]; ///長一點,比較保險
    scanf("%s", line);
    int N = strlen(line); ///知道字串的長度
    int bad = 0; ///一開始沒有壞掉
    for(int i=0; i<N; i++){
        if( line[i] !=line[N-1-i] ) bad = 1;
    }///若前後對應的字母不同, 就失敗
    /// 0123456789 共 10個數字
    ///  ^        ^ 相加是9
    ///   1      8  相加是9
    ///    2    7   相加是9
    ///     3  6
    ///      45
    ///      45
    ///     3  6
    ///    2    7
    ///   1      8
    ///  0        9
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
