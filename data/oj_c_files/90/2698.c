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
{int n,m,sum,a,b,i;
int f(int x,int y);
scanf("%d",&a);
for (i=0;i<a;i++)
{
scanf("%d %d",&m,&n );
sum=f(m,n);
printf("%d\n",sum);}
	return 0;
}

int f(int m,int n)

{if (m==0||n==1) return 1;
 if(n>m)   return f(m,m);
 if (n==1) return 1;
 else if (n!=1) return (f(m,n-1)+f(m-n,n)); 


}




