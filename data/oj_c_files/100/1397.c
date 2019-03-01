#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char s[301],x;
    char b[27]="abcdefghijklmnopqrstuvwxyz";
    gets(s);
    int len;
    len=strlen(s);
    int j,i,a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},d=0;
    for(j=0;j<26;j++){
    for(i=0;i<len;i++){
        if(s[i]==b[j]){
          a[j]++;
          d++;
        }
        }
        if(a[j]!=0){
        x=b[j];
        printf("%c=%d\n",x,a[j]);
        }
    }
    if(d==0)
    printf("No");
    return 0;
}
    