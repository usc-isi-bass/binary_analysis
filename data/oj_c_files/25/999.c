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
	int s[50]={0},t=0;s[0]=2;
	int n;
	cin>>n;
	int i=0,j=0;
	if(n==0)
		cout<<"1";
	else{
		for(i=0;i<n-1;i++)
		{
			t=0;
			for(j=0;j<50;j++)
			{
				s[j]=s[j]*2;
				s[j]=s[j]+t;
				if(s[j]>9)
				{s[j]=s[j]-10;t=1;}
				else t=0;
			}

		}
		for(j=49;j>=0;j--)
			if(s[j]>0)
				break;
		for(i=j;i>=0;i--)
			cout<<s[i];}
	
	return 0;
}