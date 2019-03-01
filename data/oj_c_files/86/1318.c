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
	int i,j,k,l,m,n,c,d,e,f;
	int a,b,g[60];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==0) printf("60\n");
		else 
		{
			a=b=0;
		   // memset(g,0,sizeof(g));
			for(k=0;k<60;k++) g[k]=0;
			for(k=0;k<m;k++) scanf("%d",&g[k]);
            k=0;
			for(;b<60;)
			{
				a++;b++;
			    if(a==g[k]) {b+=3;k++;}
				
			}
			printf("%d\n",a);
		}
	}
	return 0;
}
