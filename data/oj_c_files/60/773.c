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
	int n,i,j;
 scanf("%d",&n);
 int a[20000];
 for(i=0;i<n;i++)
 {a[i]=0;
 for(j=2;j<(i+1);j++)
 {if((i+1)%j==0)
 {a[i]++;}
 }
 }
for(i=2;i<n-2;i++)
{if(a[i]==0&&a[i+2]==0)
{ printf("%d %d\n",i+1,i+3);}
}
int b=0;
for(i=2;i<n-2;i++)
{if(a[i]==0)
{b++;}
}
if(b==0)
{printf("empty");}
 
   return 0;
}
