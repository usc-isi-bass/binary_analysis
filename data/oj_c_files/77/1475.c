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


int main ()
{
	int i=0,j,d[1000],total,temp;
	char c[1000];
	while (cin>>c[i])
	{i++;d[i]=0;}
	total=i;
	for (i=0;i<(total/2);i++)
	{
		for (j=0;j<total;j++)
		{
			if (d[j]==0)
			{
				if (c[j]==c[total-1])
				{
					temp=j;
					d[j]=1;
					do
					{j--;}
					while
					(d[j]==1);
					cout<<j<<" "<<temp<<endl;
					d[j]=1;
					break;
				}
			}
		}
	}
	return 0;
}

//??????????????????
//???????????????
//????????????????????????
//????????????????? 