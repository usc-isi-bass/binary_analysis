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
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int leiji;
		scanf("%d",&leiji);


		if(leiji==0)
			printf("60\n");



		else 
		{
			int j,stop[60];
			for(j=1;j<=leiji;j++)
			{
				scanf("%d",&stop[j]);
			}
			for(j=leiji;j>0;j--)
			{
				int time=stop[j]+3*j;
				int time1=stop[j]+3*j-3;
				if(time1<=60&&time>=60)
					printf("%d\n",stop[j]);
				else if(time<60)
					printf("%d\n",60-3*j);
				if(time1<=60&&time>=60)
					break;
				else if(time<60)
					break;
			}
		}



	}
	return 0;
}