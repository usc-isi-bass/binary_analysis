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
	char str[100];
	int num[100],i;
	memset(str,0,sizeof(str));
	memset(num,0,sizeof(num));
	int N;
	cin>>N;
	if(N==0) cout<<1<<endl;
	else{
	str[0] = 2;
	num[0] = 2;
	while(N>1)
	{
		N--;
		for(i=0;i<100;i++)
		{
			num[i] = num[i]*2;
		}
		for(i=0;i<100;i++)
		{
			if(num[i]>=10)
			{
				num[i] = num[i]-10;
				num[i+1]++;
			}
		}
	}
	int k=99;
	while(num[k]==0 && k>0) k--;
	for(i=k;i>=0;i--)
		cout<<num[i];
	cout<<endl;
	}
	return 0;
}





