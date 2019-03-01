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
	int a[16],i,j,num,h;
	while(cin>>a[0])
	{
		while(a[0]!=-1)
		{
			for (i=1;i<16;i++)
			{
				cin>>a[i];
				if(a[i]==0) break;
				h=i;//h??????0??????
			}
		
			num=0;
			for(i=0;i<=h;i++)
				for(j=0;j<=h;j++)
					if(a[i]==2*a[j])
						num++;
			cout << num << endl; break;
		}
		continue;
	}
	return 0;
}
