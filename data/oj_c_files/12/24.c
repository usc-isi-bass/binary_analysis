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
	int num[101],ori[15];
	int n,i,count,tot;

	scanf("%d",&n);
	while(n!=-1)
	{

		for(i=0;i<101;i++) num[i]=0;
		count=0;
		while(n!=0)
		{
			
			ori[count]=n;
			count++;
			num[n]=1;
			scanf("%d",&n);
			
		}
		tot=0;
		for(i=0;i<count;i++)
			if (ori[i]<=50&&num[ori[i]*2]) tot++;
			printf("%d\n",tot);
			scanf("%d",&n);
			
	
	}		
	return 0;
}
