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
	int n,i;
	double sum;
	sum=0;
	cin>>n;//???? 
	for(i=1;i<=n;i++)
	{
		if(i%7==0){sum=sum;}//??7??? 
		else if((i-7)%10==0){sum=sum;}//?????7?? 
		else if(i/10==7){sum=sum;}//?????7?? 
		else
		{
			sum=sum+i*i;//????????? 
		}
	}
	cout<<sum<<endl;
} 