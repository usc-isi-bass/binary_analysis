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
int k,i,j,l,s=0,a[100][100]={0},m,n,*p;
p=a;
scanf("%d",&k);
for(i=0;i<k;i++)
{s=0;
scanf("%d%d",&m,&n);
p=a;
for(j=0;j<m;j++)
for(l=0;l<n;l++)
scanf("%d",(*(a+j)+l));
for(j=0;j<n;j++)
s=s+*(a[0]+j);
for(j=0;j<n&&m>1;j++)
s=s+*(a[m-1]+j);
for(j=1;j<m-1;j++)
s=s+*(a[j]);
for(j=1;j<m-1&&n>1;j++)
s=s+*(a[j]+n-1);
printf("%d\n",s);
}
}