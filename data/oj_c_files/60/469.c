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

int su(int m)
{int k;
int sum=0;
int l;
for(k=2;k<=m-1;k++)
{if (m%k==0) sum=sum+1;}

if (sum==0) l=1;
else l=2;
return (l); 
}

void main()
{int n;
int sum=0;
scanf ("%d",&n);
int i=0;
for (i=2;i<=n-2;i++)
{if (su(i)==1 && su(i+2)==1) {printf("%d %d\n",i,i+2);sum=sum+1;}}
if(sum==0) printf("empty");


}