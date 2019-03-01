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

void qut(int a,int b);                                       //????
int num=0;                                                    //?????????
int main()
{
	int i,n,g[1000];                                         //?????????
	cin>>n;
	for(i=0;i<n;i++)                                         //??????
		cin>>g[i];
	for(i=0;i<n;i++)
	{
	    qut(g[i],1);                                         //????
		cout<<num<<endl;
              num=0;
	}
	return 0;
}

void qut(int a,int b)		
{
	int i;
	if (a>=b)		
	{
		num++;		
		if (b==1)	                                     
			b++;
		for (i=b;i<=a;i++)	
		{
			if (a%i==0)	
			{
				qut(a/i,i);	                                //??a%i==0,??
			}
		}
	}
}

