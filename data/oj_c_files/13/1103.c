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

int  main ()
{  

	int  n,i,j,k;
	cin>>n;
	int a[20001];
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<n;i++)
	{
		k=0;
		if (i==0)
			cout<<a[i];
		for (j=0;j<i;j++)
		{
			if (a[i]==a[j])
				k++;
		}
			if(k==0&&i!=0)
				cout<<" "<<a[i];
		
	}
		return 0;
	}
	
