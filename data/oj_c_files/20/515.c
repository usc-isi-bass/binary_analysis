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
char str[15],substr[4],*p;
int i,n,j,k;
while(scanf("%s%s",str,substr)!=EOF)
{


p=&str[0];
n=strlen(str);
for(i=0;i<n;i++)
if(*p<str[i])
{
p=&str[i];
j=i;
}
for(i=n-1;i>j;i--)
str[i+3]=str[i];
*(p+1)=substr[0];
*(p+2)=substr[1];
*(p+3)=substr[2];
str[n+3]='\0';

printf("%s\n",str);
}
return 0;
}