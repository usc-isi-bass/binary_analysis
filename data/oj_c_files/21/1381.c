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


int main(int argc, char* argv[])
{
	int n,i,a[300],s=0;
	double t,max=0;
	int x,y,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	t=(float)s/n;
	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-t)>max)
		{
			x=a[i];
			max=fabs(a[i]-t);
			flag=0;
		}
		else if(fabs(a[i]-t)==max)
		{
			y=a[i];
			flag=1;
		}
	}
	if(flag){
		if(x>y){
			printf("%d,%d",y,x);
		}
		else{
			printf("%d,%d",x,y);
		}
	}
	else{
		printf("%d",x);
	}
	return 0;

}

