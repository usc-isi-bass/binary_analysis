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
	char weight[6];
	int z,q,s,l;
	int i,j,k,p,m;
	for(i=1;i<=5;i++)
	{
		z=i;
		weight[i]='z';
		for(j=1;j<=5;j++)
		{
			if(i==j)
			{
				continue;
			}
			q=j;
			weight[j]='q';
			for(k=1;k<=5;k++)
			{
				if(k==i || k==j)
				{
					continue;
				}
				s=k;
				weight[k]='s';
				for(p=1;p<=5;p++)
				{
					if(p==i || p==j || p==k)
					{
						continue;
					}
					l=p;
					weight[p]='l';
					if(z+q==s+l && z+l>s+q && z+s<q)
					{
						for(m=5;m>=1;m--)
						{
							if(z!=m && q!=m && s!=m && l!=m)
							{
								continue;
							}
							cout<<weight[m]<<' '<<m*10<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}