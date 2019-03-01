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

int div(int a)
{
	if(a%2==1)a=(a-1)/2;
	else a=a/2;
	return a;
}
int compare(int a, int b)
{
	if(a>b){
		a=div(a);
		compare(a,b);}
	else if (a<b){
		b=div(b);
		compare(a,b);}
	else return(a);
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=compare(a,b);
	printf("%d",a);
}