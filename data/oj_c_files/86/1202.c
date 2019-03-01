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
	int pause[21],skip,m,time[21],i,n,counter=0;           //????
	cin>>n;
	while (counter<n&&cin>>m)
	{
		    counter++;                                     //????????????n??????
			for (i=1;i<=m;i++)
			{
				cin>>pause[i];
			}
			for (i=1,skip=60-3*m;i<=m;i++)               //????????skip????????m=1?0?????????
			{
				time[i]=pause[i]+3*i;                      //????????????
				if (time[i]>=63)
				{
						skip=pause[i]+63-time[i];          //????????????????????????
						break;
				}
				else if (time[i]>=60)
				{
					skip=pause[i];
					break;
				}
			}
			cout<<skip<<endl;                             //????
	}

return 0;
}
