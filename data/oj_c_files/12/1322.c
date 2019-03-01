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
	int a[20],i=0,j,count=0;
	while(cin>>a[i])
	{
		 if(a[i]==0)
	     {
             cout<<count<<endl;
	         count=0;
                 i=0;
	         continue;
	     }
	
		if(i!=0)
		{
			for(j=0;j<i;j++)
			{
				if( a[j]==2*a[i]||a[i]==2*a[j])
				{count++;}
			}

		}
	     i++;
	}
	
	
	   
	return 0;
}
