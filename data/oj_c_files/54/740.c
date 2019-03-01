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
	int n,k;
	cin>>n>>k;
	int num[1000];
	num[n+1]=0;
	int i=n+1;
	do
	{
		num[n+1]+=1;
		for(i=n+1;i>1;i--)
		{
		if(num[i]%(n-1)!=0)
			break;
		else
				num[i-1]=(num[i]*n)/(n-1)+k;//?????????????
		}
	}
   while(i>1);	
	   cout<<num[1];
}
