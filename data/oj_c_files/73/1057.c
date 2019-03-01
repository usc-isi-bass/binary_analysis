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
	int col[5],row[5];
	int i,j,max,min;
	int p[5][5];
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			cin>>*(*(p+i)+j);
	for (i=0;i<5;i++)
	{
		max=0;min=2100000000;
		for (j=0;j<5;j++)
		{
			if (max<*(*(p+i)+j))
			{
				max=*(*(p+i)+j);
				*(row+i)=j;
			}
			if (min>*(*(p+j)+i))
			{
				min=*(*(p+j)+i);
				*(col+i)=j;
			}
		}
	}
	for (i=0;i<5;i++)
		if (*(col+*(row+i))==i)
		{
			cout<<i+1<<" "<<*(row+i)+1<<" "<<*(*(p+i)+*(row+i))<<endl;
			return 0;
		}
	cout<<"not found"<<endl;
	return 0;
}