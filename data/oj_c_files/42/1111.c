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
	int n,i,j,k,counter=0;
	int num[110001];
	cin>>n;
	for(i=0;i<=110000;i++) num[i]=0;
	for(i=1;i<=n;i++) cin>>num[i];
	cin>>k;
	for(i=1;i<=n;i++)
	{
		if(num[i]==k)
		{
			for(j=i;j<=n-counter;j++)
			{
				num[j]=num[j+1];
			}
			counter++;
			i--;
		}
	}
	for(i=1;i<=n-counter-1;i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<num[n-counter];
	return 0;
}