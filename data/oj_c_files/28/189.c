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

void main()
{
int i,j,k,n,m;
k=0;
char c;
char p[1000]={0};
char str[300][300];
int s[300]={0};
gets(p);
for(i=0,n=0;*(p+n)!='\0';i++)
{for(j=0;*(p+n)!=' '&&*(p+n)!='\0';j++)
{str[i][j]=*(p+n);
n++;}
 s[i]=j;
 k++;
 n++;}
for(i=0;i<k;i++)
{
	if(s[i]!=0)
	{printf("%d",s[i]);
  if(i<k-1)
	  printf(",");}
}
}