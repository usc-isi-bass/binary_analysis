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
	int n,k,i,t,f;
	long int ans;
	scanf("%d%d",&n,&k);
	for(ans=1;ans<3000000000;ans++)
	{
		f=0;
		t=ans;
		for(i=1;i<=n;i++)
		{
			if(((t-k)%n==0)&&(t-k>0))
			{
				t=t-k-(t-k)/n;
			}
			else
			{
				f++;
				break;
			}
		}
		if(f!=0)
		    continue;
		else
			break;
	}
	printf("%ld\n",ans);
	return 0;
}
