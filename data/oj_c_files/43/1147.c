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
	int m,i,j,k;
	cin>>m;
	i=3;
	while(i<=(m/2))
	{
		j=2;

		while(j<i)
		{
			if (i%j==0)
			{
				break;
			}
			else j++;

			if (((j==i-1)||(i==3))==1)
			{
				k=2;

				while(k<(m-i))
						{
							if ((m-i)%k==0)
							{
								break;
							}
							else k++;
							if (((k==(m-i-1))||(m-i==3))==1)
								cout<<i<<" "<<(m-i)<<endl;
						}
			}
		}
		i=i+2;
	}
	return 0;
}
