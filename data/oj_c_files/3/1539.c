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
int n,i,j,k;
scanf("%d %d",&n,&k);
int a[n];
int b[n];
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
b[i]=k-a[i];
}
int m=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[j]==a[i])m++;
}
}
if(m>0) printf("yes");
else printf("no");
}

