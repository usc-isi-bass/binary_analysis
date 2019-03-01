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
int i,n,j,n1,k,sum=0;
char a[257],b[257],c[257];
gets(a);
gets(b);
gets(c);
n=strlen(a);
n1=strlen(b);
for(i=0;i<n-n1+1;i++)
{
sum=0;
for(j=i,k=0;j<i+n1;j++,k++)
{
if(a[j]!=b[k])
sum=1;
}
if(sum==0)
{
for(j=i,k=0;j<i+n1;j++,k++)
a[j]=c[k];
break;
}
}
printf("%s",a);
return 0;
}

