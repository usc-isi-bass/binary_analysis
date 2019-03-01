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
	int n,s=0,u;
	int image[100][100];
	scanf("%d",&n);
	for(int row=0;row<n;row++)
	{
		for(int col=0;col<n;col++)
		{
			scanf("%d",&(image[row][col]));
		}
	}
	for(int i=0;i<n;i++)
	{
		int k=0;
		for(int j=0;j<n;j++)
		{
			if(image[i][j]==0)
			{
//				printf("%d %d\n",row2,col2);
				k++;	
			}
		}
		if(k>0)
		{
			u=k;
			s++;
		}
		
	}
	int m=(u-2)*(s-2);
	printf("%d",m);
	return 0;
}