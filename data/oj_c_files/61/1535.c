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

int f(int a);
int main()
{
	int a,n,k,i;
	int r[100];
	scanf("%d",&k);
	for(i=1;i<=k;i++){
	scanf("%d",&n);
	a=f(n);
	printf("%d\n",a);}
	return 0;
}
int f(int a){
	if(a==3){return 2;}
		else if(a==2||a==1){return 1;}
		else return (f(a-1)+f(a-2));
}