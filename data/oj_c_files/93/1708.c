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
	int a,m,p,j;
	char t='n';
	m=3;p=5;j=7;
	scanf("%d",&a);
	if(a%3==0 && a%5==0 && a%7==0) printf("%d %d %d",m,p,j);
	else if(a%3!=0 && a%5!=0 && a%7!=0)  printf("%c",t);
	else if(a%3==0 && a%5==0 && a%7!=0) printf("%d %d",m,p);
	else if(a%3==0 && a%5!=0 && a%7==0) printf("%d %d",m,j);
	else if(a%3!=0 && a%5==0 && a%7==0) printf("%d %d",p,j);
	else if(a%3==0) printf("%d",m);
	else if(a%5==0) printf("%d",p);
	else if(a%7==0) printf("%d",j);printf("\n");
}
