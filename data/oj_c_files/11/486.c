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

int rui(int x)
{
	if(x%4!=0) return(0);
	else if(x%100==0&&x%400!=0) return(0);
	else return(1);
}
void main()
{
	int r[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a,b,c,i,n=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=0;i<b-1;i++) n=n+r[i];
	n=n+c;
	if(rui(a)==1&&b>2) n++;
	printf("%d\n",n);
}