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
	int n,a[100][60],i,m[100],j,s,t;//??????s,t,n,????a[100][60],??????i,j
	cin>>n;//????n
	for(i=0;i<n;i++)//?????????????????
	{
		cin>>m[i];
		if(m[i]!=0)
		{
			for(j=0;j<m[i];j++)
		 {
			cin>>a[i][j];
		 }
		}
	}
	for(i=0;i<n;i++)//???????
	{
		if(m[i]==0)//????????????
			{
				cout<<60<<endl;//????
		}
		if(m[i]>0)//????????????
		{
			j=m[i]-1;
			s=a[i][j]+m[i]*3;
			if(s>60)
			{  s=0,j=0;
			while(s<=60)
			{
				s=3*(j+1)+a[i][j];
				j++;
			}
			if(s-3>60)
				t=60-(j-1)*3;
			else
				t=60-(j-1)*3-(3-(s-60));
			}
			else
			{
				t=60-m[i]*3;
		
			}
			cout<<t<<endl;//????
		}
	}
				
	return 0;
}
	