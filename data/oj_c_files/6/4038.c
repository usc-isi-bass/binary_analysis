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
	int n;
	scanf("%d",&n);
	int num[120][120];
	for(int i=0;i<n;i++)
	{
		int a,b;
		int s=0;
		scanf("%d%d",&a,&b);
		for(int m=0;m<a;m++)
		 for(int n=0;n<b;n++)
		  { scanf("%d",&num[m][n]);
		    if(m==0||m==a-1||n==0||n==b-1)
		    s+=num[m][n];
		    
	         
	}
	printf("%d\n",s);
	
		}
	
	
	
	}
