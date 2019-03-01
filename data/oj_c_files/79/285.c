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

int number(int x,int y)
{
	int k,num;
	if(x==1) num=1;
	k=y%x;
	if(x==2)
	{
		if(k==1) num=2;
	    else num=1;
	}
	if(x>2)
	{
	    num=number(x-1,y)-x+k;
		if(num<=0) num+=x;
	}
	return num;
}

void main()
{
	int a[1000],b[1000],n=0,i;
    for(n=0;;n++)
	
	{	scanf("%d %d",&a[n],&b[n]);	
		if(a[n]==0&&b[n]==0)break;}		
    for(i=0;i<n;i++) 
		printf("%d\n",number(a[i],b[i]));
}
