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
 	 int f(int a,int b);
 	 int i,t,n,m;
 	 scanf("%d",&t);
 	 while(t--)
	 {
		 scanf("%d%d",&m,&n);
		 printf("%d\n",f(m,n));
	 }
	 
}
		 
int f(int m,int n)
{
 	 if(m==0||n==1) return 1;
     else if(n>m) return f(m,m);
     else return f(m,n-1)+f(m-n,n);
}
