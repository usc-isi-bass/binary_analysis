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
	int n,m,a[10],k,i,j,sum;
	cin>>n;
	for(k=0;k<n;k++)
	{
		cin>>m;
		if(m==0)
			cout<<60<<endl;
		else
		{
			for(i=1;i<=m;i++)
				cin>>a[i];
			for(i=1;i<=m;)
			{
				if((a[i]+i*3)<60)
					i++;
				else
					break;
			}
			if(((a[i]+(i-1)*3)<=60)&&(a[i]+i*3>60))
				sum=a[i];
			else
				sum=60-(i-1)*3;
			cout<<sum<<endl;
		}
	}
	return 0;
}

