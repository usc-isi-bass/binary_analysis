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
	char a[1000]={0};
	char b[1000]={0};
	int c[1000]={0};
	cin>>a>>b;
	int p=strlen(a);
	int q=strlen(b);
	if(p!=q)
		cout<<"NO";
	else
	{
		for(int i=0;i<p;i++)
			c[i]=1;
		for(int i=0;i<p;i++)
		{
			for(int j=0;j<p;j++)
			{
				if((b[j]==a[i])&&(c[j]!=0))
				{
					c[j]=0;
					break;

				
				
				}
			
			
			
			}




		}
		int sum=0;
		for(int i=0;i<p;i++)
		{
			if(c[i]==1)
			{
				sum=1;
				cout<<"NO";
				break;
			
			
			
			}
		
		
		
		
		
		
		}
		if(sum==0)
			cout<<"YES";







	}







	return 0;






}