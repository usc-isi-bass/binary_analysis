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
	int a[5][5];
	int (*p)[5];
	p=a;
	int max[5][1];
	int min[5][1];
	int *pmax[5]={max[0],max[1],max[2],max[3],max[4]};
	int *pmin[5]={min[0],min[1],min[2],min[3],min[4]};
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin >> *(*(p+i)+j);
	for(i=0;i<5;i++)
	{
		*pmax[i]=*(*(p+i)+0);
		*pmin[i]=*(*(p+0)+i);
		for(j=0;j<5;j++)
		{
			if(*pmax[i]<*(*(p+i)+j))
				*pmax[i]=*(*(p+i)+j);
			if(*pmin[i]>*(*(p+j)+i))
				*pmin[i]=*(*(p+j)+i);
		}
	}
	int flag=0;
	for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
		    {
			if(*pmax[i]==*pmin[j]&&*pmax[i]==*(*(p+i)+j))
			{
				cout << i+1 << " " << j+1 << " " << *(*(p+i)+j) << endl;
			    flag=1;
				break;
			}
			
		    }
			if(flag==1)
				break;
	}
	if(flag==0)
		cout << "not found" << endl;
	return 0;
}