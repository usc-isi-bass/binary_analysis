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
	int i,j=0,k,sum[1000]={0};
    char str[1100],a[1000];
    cin>>str;
    for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=str[i]-32;
	}
	a[0]=str[0];
	for(i=1;i<strlen(str);i++)
	{
		if(str[i]==str[i-1])
		{
			sum[j]++;
		}
		else 
		{
              j=j+1;
			  a[j]=str[i];
		}
	}
	for(i=0;i<=j;i++)
	{
		cout<<"("<<a[i]<<","<<sum[i]+1<<")";
	}
	return 0;
}