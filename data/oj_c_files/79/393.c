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
	int num[1000],i,cnt,jsh=0,m,n;
	scanf("%d %d",&n,&m);
	while(n!=0)
	{
		for(i=0;i<=n-1;i++)
			num[i]=i+1;
		for(i=0;i<=n-1;i++)

		{
			
			cnt=0;
			for(cnt=0;cnt<m;cnt++)
			{
				while(num[jsh]==0)
					jsh=(jsh+1)%n;
				jsh=(jsh+1)%n;
			}
			jsh=jsh-1;
			if(jsh<0)
				jsh=n-1;
			if(i==n-1)
				printf("%d\n",num[jsh]);
			num[jsh]=0;
		}
        scanf("%d %d",&n,&m); 
		jsh=0;
	}
	return 0;
}
 

