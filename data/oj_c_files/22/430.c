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


int i,j,k,h,m,n,a[300];
char c;
int t1=-1,t2=-1,num=300;

int main()
{
	for(k=0;k<=300;k++)
	{
			scanf("%d%c",&a[k],&c);
			if(c=='\n')
			{
				num=k;
				break;
			}
	}	

	for(j=0;j<=num;j++)
	{
		if(a[j]>=t1) t1=a[j];
	}

	for(i=0;i<=num;i++)
	{
		if((a[i]>=t2)&&(a[i]<t1)) t2=a[i];
	}
	if(t2==-1) printf("No");
	else printf("%d",t2);

return 0;
}

