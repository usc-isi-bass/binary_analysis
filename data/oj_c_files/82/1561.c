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

int main(){
	int n,i,j,a[101][2],s=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
		   scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90)
		{
			s++;
		}
		else
		{
			if(b==0)
			{
				b=s;
			}
			else
			{
				if(s>b)
				{
					b=s;
				}
			}
			s=0;
		}
	}
	if(s>b)
	{
		b=s;
	}
	
		printf("%d",b);


	return 0;
}