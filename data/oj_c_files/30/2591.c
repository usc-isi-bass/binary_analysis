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


int  main()
{
	int n,i,k,s,j,a,f,g;
	int sum=0;
	cin>>n;
	for (i=1;i<=n;i++)
		{
			a=0;
			f=i;
			g=i;
	  for(j=0;f!=0;f/=10,j++);
		for (k=0;k<j;k++)
			{
				s=g%10;
		    if (s==7)
				a=1;
			else a=a;
			g=g/10;
		}
		if (i%7==0)
			a=1;
		else 
			a=a;
		if (a==0)
			sum=sum+i*i;
		else sum=sum;
	}
		cout<<sum<<endl;
return 0;
}