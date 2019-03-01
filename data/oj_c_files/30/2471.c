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
	int n,sum=0,number;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		number=i;
		if(number<=10)
		{
		   if(number!=7)
		       sum+=number*number;
		}
		else
		{
			if((number%7!=0)&&(number/10!=7)&&(number%10!=7))
               sum+=number*number;
		}
	}
	cout<<sum<<endl;
	return 0;
}
	 
