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

main()
{
	int matrix[5][5];
	for (int i=0;i<=4;i++)
		for (int m=0;m<=4;m++)
			scanf ("%d",&matrix[i][m]);
	int c=0;
	for (int n=0;n<=4;n++)
		for (int l=0;l<=4;l++)
			{
				int max=matrix[n][l];
				for (int a=0;a<=4;a++)
					{
						if (matrix[n][a]>max)
						max=matrix[n][a];
						else
						max=max;
					}
				int min=matrix[n][l];
				for (int b=0;b <=4;b++)
					{
						if (matrix[b][l]<min)
						min=matrix[b][l];
						else
						min=min;
					}
				if (max==matrix[n][l]&&min==matrix[n][l])
				{
				printf("%d %d %d",n+1,l+1,max);
				c++;
			    }
			} 
	if (c==0)
	printf ("not found");
		
}