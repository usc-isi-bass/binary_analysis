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
	int m,i,j,w,x,k,s;
	cin>>m;
	for(i=3;i<=m/2;i+=2)
	{
		j=m-i;
		w=sqrt(i);
		x=sqrt(j);
		for(k=2;k<=i-1;k++)
		{
			if(i%k==0) break;
			if(k>=i-1) 
			{
				for(s=2;s<=j-1;s++)
				{
					if(j%s==0) break;
					if(s>=j-1) cout<<i<<' '<<j<<endl;
				}
			}
		}
	}
	return 0;
}
