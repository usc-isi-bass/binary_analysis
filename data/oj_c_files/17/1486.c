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
int i,j;char a[101]={0},b[101]={0};
while(scanf("%s",a)!=EOF)
{
strcpy(b,a);
for(i=0;a[i]!=0;i++)
{if(a[i]=='(')a[i]='$';
else if(a[i]==')') a[i]='?';
else a[i]=' ';}
for(i=0;a[i]!=0;i++)
{
if(a[i]=='?')
{
for(j=i-1;j>-1;j--)
if(a[j]=='$') {a[j]=' ';a[i]=' ';break;}
}
}
printf("%s\n",b);
printf("%s\n",a);
}
return 0;
}