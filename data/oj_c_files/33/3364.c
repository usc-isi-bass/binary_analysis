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
int n,i,j,len;
char str[1000][LEN];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
}
for(i=0;i<n;i++)
{
len=strlen(str[i]);
for(j=0;j<len;j++)
{
if(str[i][j]=='A')
{
str[i][j]='T';
}
else if(str[i][j]=='T')
{
str[i][j]='A';
}
else if(str[i][j]=='C')
{
str[i][j]='G';
}
else if(str[i][j]=='G')
{
str[i][j]='C';
}}}
for(i=0;i<n;i++)
{
printf("%s\n",str[i]);
}
return 0;
}
