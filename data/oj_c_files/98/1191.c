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
	char a[41];
	int num,count=0,sum=0;
	cin>>num;
	while(count<num)
	{
		count++;
		cin>>a;
		int l=strlen(a);
		if(sum==0)
		{	
			cout<<a;
			sum+=l;
		}
		else if(sum+l+1>80)
		{
			cout<<endl;
			cout<<a;
			sum=l;
		}
		else if(sum>0&&sum+l<80)
		{
			cout<<" "<<a;
			sum+=(l+1);
		}
	}
	return 0;
}