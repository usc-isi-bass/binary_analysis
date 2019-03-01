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
	int m,n,a,c,t,i,j,b[50],d;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		t=0;
		c=60;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a);
			t=a+(j+1)*3;
			if(t>59){
				j++;
				break;
			}
			c-=3;
		}
		for(;j<n;j++){
			scanf("%d",&d);
		}
		if(t>59&&t<64)
			b[i]=a;
		else
			b[i]=c;
	}
	for(i=0;i<m;i++)
		printf("%d\n",b[i]);
	return 0;
}
