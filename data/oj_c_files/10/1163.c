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

int k,d=0,m;
void f(int i,int a[25],int c[25])
{
	if(i==0) a[i]=0;
	else a[i]=a[i-1]+1;
	for(;;a[i]++)
	{if(a[i]==(k-1)) 
	{if(i==0) m=1;
	else if(c[a[i]]>c[a[i-1]]) m=i;
	else m=i+1;
	d=d>m?d:m;
	break;}
	if(i!=0)
	{if(c[a[i]]>c[a[i-1]]) continue;
	else f(i+1,a,c);}
	else f(1,a,c);
	}
}
int main()
{
	int i,c[25],a[25];
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&c[i]);
	f(0,a,c);
	printf("%d",d);
	return 0;
}
	
