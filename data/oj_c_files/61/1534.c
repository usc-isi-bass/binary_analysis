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

int feibo(int n);
int main()
{
int i,n,c,result[1000];
scanf("%d",&c);
for(i=1;i<=c;i++){
	scanf("%d",&n);
	result[i]=feibo(n);
}
for(i=1;i<=c;i++){
	printf("%d\n",result[i]);
}
return 0;
}


int feibo(int n)
{
int a=0;
int b=0;
int result=1;
int i;
for(i=1;i<=n-1;i++){
	a=result;
	result=result+b;
	b=a;
}
return result;
}