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
	char line[110]={'\0'},out[110]={'\0'};
	int i,n=0,num[110]={0};
	cin.getline(line,110);
	for(i=0;i<strlen(line);i++)
	{
		if(line[i]>='a'&&line[i]<='z')
			line[i]=line[i]-'a'+'A';
	}
    out[0]=line[0];
	num[0]=1;
	for(i=1;i<strlen(line);i++)
	{
		if(out[n]==line[i])
			num[n]++;
		else
		{
			n++;
			out[n]=line[i];
			num[n]++;
		}
	}
	for(i=0;i<=n;i++)
		cout<<"("<<out[i]<<","<<num[i]<<")";
		return 0;
}