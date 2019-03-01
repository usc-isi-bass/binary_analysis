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
	int sz[16],i,a,num=0,no=0,j;
	while(1)
	{
		scanf("%d",&a);
			if(a==-1)
				return 0;
			else if(a>0)
			{
				sz[no]=a;
				no++;
			}
			else if(a==0)
			{
				for(i=0;i<no;i++)
				{
				
					for(j=0;j<no;j++)
					if(sz[i]==2*sz[j])
					num++;
				}
			
			printf("%d\n",num);
			no=0;
			num=0;


			}
	}

	return 0;

} 