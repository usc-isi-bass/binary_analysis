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


int main()                                       //?????
{
	int n,m,i,j,k=0,a;
	int num[20]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		if(m==0)
		{
			cout<<60<<endl;}
		else
		{for(j=1;j<=m;j++)
		{
			cin>>a;
			if(k==1)
				continue;
			else
			{   num[j]=a;
			  if(num[j]+3*(j-1)==59)
				 { cout<<num[j];
			  k=1;}
			  else if(num[j]+3*(j-1)>59)
				  {cout<<60-3*(j-1)<<endl;
			  k=1;}
			  else if(num[j]+3*(j-1)<59&&num[j]+3*j>59)
			{cout<<num[j]-3*(j-1)<<endl;
			  k=1;}
			  else if(j==m)
			cout<<60-3*j<<endl;}}}
	k=0;}
		return 0;
}