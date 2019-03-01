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
	int k=0,i=0,sum=0;
	cin>>k;
	for(i=0;i<k+1;i++)
	{
		if(i%7!=0)
		{
			if((i-7)%10!=0)
			{
				if((i-(i%10))/10!=7)
					sum=sum+(int)pow(1.0*i,2.0);
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}