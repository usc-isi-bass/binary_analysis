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
	int a[100][100],i,j,m,l,n,k,t;
	int (*p)[100]=a;
	int *q=a[0];
	int row,column;
	cin>>row>>column;
	for(j=0;j<row;j++)
        {
            q=*(a+j);
            for(l=0;l<column;l++)
                cin>>*(q+l);//??
        }
	for(i=0;i<=row+column-2;i++)
	{
		for(k=0;k<row;k++)
		{
			for(t=0;t<column;t++)
			{
				if(k+t==i)
				{cout<<*(*(p+k)+t)<<endl;}//????
			}
		}
	}
	return 0;
}