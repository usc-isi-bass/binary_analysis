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
void de(char x[][50],int y);
    int k,i;
    char x[50][50]={0};
    scanf("%d",&k);
    for(i=0;i<=k-1;i++)
    scanf("%s",x[i]);
    for(i=0;i<=k-1;i++)
    de(x,i);
    for(i=0;i<=k-1;i++)
    printf("%s\n",x[i]);
return 0;
}
void de(char x[][50],int y)
{
     int c;
     c=strlen(x[y]);
     if(x[y][c-1]=='r'||x[y][c-1]=='y')
     {
                                       x[y][c-1]=0;
                                       x[y][c-2]=0;
     }
     else if(x[y][c-1]=='g')
     {
          x[y][c-1]=0;
          x[y][c-2]=0;
          x[y][c-3]=0;
     }
}
