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
	int a[17],i,j,k,s,n;
	for(k=1;;k++)
	{		
		s=0;n=0;
		for(i=1;;i++)
		{		
			cin>>a[i];
			n++;
			if(a[i]==0||a[i]==-1) break;
		}
		if (a[n]==-1) break;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if((a[i]*2==a[j])||(a[j]*2==a[i]))
				 {
					s++;
				 }
			}
		}
	    cout<<s<<endl;
	   
	}
	return 0;
}
