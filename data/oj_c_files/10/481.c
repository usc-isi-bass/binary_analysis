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
	int a[30],k=0,i=0,j=0,b[30]={0};
	cin>>k;
	for(i=0;i<k;i++)
		cin>>a[i];
	b[0]=1;
	for(i=1;i<k;i++)
	{
		int temp=1;
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>=a[i])
			{
				if((b[j]+1)>temp)
					temp=b[j]+1;
			}
		}
		b[i]=temp;
	}
	int max=0;
	for(i=0;i<k;i++)
		if(b[i]>max)
			max=b[i];
	cout<<max<<endl;
	return 0;
}

