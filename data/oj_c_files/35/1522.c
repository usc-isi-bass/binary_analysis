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
	int matrix[8][8];
	int a, b, row, col, n, m, p, roww, coll, decide;
	scanf("%d,%d",&a,&b);
	a=a-1;
	b=b-1;
	decide=0;
	for(row=0;row<=a;row++)
	{
		for(col=0;col<=b;col++)
		{
			scanf("%d",&matrix[row][col]);
		}
	}
	for(row=0;row<=a;row++)
	{
		for(col=0;col<=b;col++)
		{
			n=matrix[row][col];
			m=0;
			for(roww=0;roww<=a;roww++)
			{
				if(n<matrix[roww][col])
				{
					m++;
				}
			}
			p=0;
			for(coll=0;coll<=b;coll++)
			{
				if(n>matrix[row][coll])
					p++;
			}
			if(m==a&&p==b)
			{
				printf("%d+%d",row,col);
				decide=1;
			
			}
		}
	}
	if(decide==0)
		printf("No");
	return 0;
}

