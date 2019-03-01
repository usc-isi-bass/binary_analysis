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
	int k;
	cin>>k;
	int max=0,max2=0;
	int a;
	for(int i=1;i<=k;i++)
	{
		cin>>a;
		if(a>=max)
		{
			int temp;
			temp=max;
			max=a;
			max2=temp;
		}
		
		else if( a>max2)
		{
			max2=a;
		}
		
        //i++;
	}
	cout<<max<<endl;
	cout<<max2<<endl;
	  
	return 0;
}

