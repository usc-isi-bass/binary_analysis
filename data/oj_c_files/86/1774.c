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

int main(){
int n,j,i,m,k,s[100],t,sum;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&m);
for(j=0;j<m;j++)
scanf("%d",&s[j]);
if(m==0)printf("60\n");
else
{
k=sum=0;
for(t=1;t<=60;t++)
{
//printf("%d %d %d\n",sum,k,t);
sum++;
if(sum==s[k]){t+=3;if(k<m-1)k++;}
}
printf("%d\n",sum);
}
}
}