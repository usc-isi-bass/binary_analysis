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
	int a,b,i=0,j=0,k=0,shijinzhi=0,power=1;
	int x[30];
	cin>>a;
    x[0]=getchar()+1;
	while(x[i]!=-16)
	{
		i++;
		x[i]=getchar();
		if(x[i]>96) x[i]-=87;
		else if(x[i]>64) x[i]-=55;
		else x[i]-=48;
	}
	if (x[1]==0) cout<<"0";
	else
	{
	for(j=i-1;j>=1;j--)
	{
		shijinzhi+=x[j]*power;
		power=power*a;
	}
	cin>>b;
	i=0;
	while(shijinzhi>0)
	{
		i++;
		x[i]=shijinzhi%b;
		shijinzhi=shijinzhi/b;
		if(x[i]<10) x[i]+=48;
		else x[i]+=55;
	}
	for(k=i;k>0;k--)
	{
		putchar(x[k]);
	}
	}
	return 0;
}
