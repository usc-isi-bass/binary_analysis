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
	int shuzu[16]={0},i,j,pair=0,n;
		for(i=0;shuzu[0]!=-1;i++)
		{
			scanf("%d",&shuzu[i]);
			if(shuzu[i]==0)
			{	
				n=i;
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						if(shuzu[i]==2*shuzu[j])
							pair++;
					}
				}
				printf("%d\n",pair);
				i=-1;
				pair=0;
			}
		}
	return 0;
}
