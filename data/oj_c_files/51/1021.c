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

const int len=201;
int main()
{
	int len,i,j,n=0,num[10000],max=0;
	char c[10000][6],input[600];
	cin>>len;
	cin.get();
	cin.getline(input,600);
	for(i=0;i<=strlen(input)-len;i++)
	{
		char temp[6];
			for(j=0;j<len;j++)
		{
			c[n][j]=input[i+j];
		}
		c[n][len]='\0';
		n++;
	}
	for(i=0;i<n;i++)
	{
		num[i]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(strcmp(c[i],c[j])==0&&num[i]>0)
			{
				num[i]++;
				num[j]--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(num[i]>max) max=num[i];
	}
	if(max==1) cout<<"NO"<<endl;
	else 
	{
		cout<<max<<endl;
		for(i=0;i<n;i++)
		{
			if(num[i]==max) cout<<c[i]<<endl;
		}
	}
	return 0;
}