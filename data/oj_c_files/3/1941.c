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
	int n,k,i,j,k2=0;//k2???????n?????????
	int a[1000]={0};//a?1000?????n???????
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	i=0;j=0;
	while(k2!=k&&i<n)//????????a????????while?????????k2?=k?????
	{
		j=i+1;
		while(k2!=k&&j<n)
		{
			k2=a[i]+a[j];
			j++;
		}
		i++;
	}
	if(k2==k)
		cout<<"yes";
	else 
		cout<<"no";
	return 0;
}