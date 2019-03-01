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
	int n,i,j,sum=0,a[100][20],num[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		num[i]=0;
		cin>>a[i][0];
	    for(j=1;j<=a[i][0];j++)
			cin>>a[i][j];
        if(a[i][0]==0) num[i]=60;
		else
			for(j=1;j<=a[i][0];j++)
			{
				sum=a[i][j]+3*j;
		    	if(sum>60) 
				{
					if(a[i][j]+3*(j-1)<60)
					  num[i]=a[i][j];
				    else 
				 	  num[i]=60-3*(j-1);
			    	break;
				}
			}
		if(num[i]==0) 
			num[i]=60-3*a[i][0];
		else num[i]=num[i];
	}
	for(i=0;i<n;i++)
		cout<<num[i]<<endl;
   return 0;	
}
