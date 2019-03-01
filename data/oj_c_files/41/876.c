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
	int a[6];
	int b[6];
	int c[6]={0};
	for (a[1]=1;a[1]<=5;a[1]++)
	{
		for (a[2]=1;a[2]<=5;a[2]++)
		{
			if (a[1]==a[2])continue;
			for (a[3]=1;a[3]<=5;a[3]++)
			{
				if (a[3]==a[1] || a[3]==a[2])continue;
				for (a[4]=1;a[4]<=5;a[4]++)
				{
					a[5]=15-a[1]-a[2]-a[3]-a[4];
					if ((a[4]==a[1]) || (a[4]==a[2] )||(a[4] == a[3]) || (a[2]==5) || (a[3] ==5))continue;
					c[1]=(a[1]==5);
					c[2]=(a[2]==2);
					c[3]=(a[5]==1);
					c[4]=(a[1]!=3);
					c[5]=(a[1]==4);
					b[a[1]]=1;
					b[a[2]]=2;
					b[a[3]]=3;
					b[a[4]]=4;
					b[a[5]]=5;
					if ( (c[a[1]]==1) && (c[a[2]]==1) && (c[a[3]]==0) && (c[a[4]]==0) && (c[a[5]]==0) )
					{
						cout<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<b[4]<<" "<<b[5];
					}
				}
			}
		}
	}

	return 0;
}