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

int main(int argc, char* argv[])
{
	int n,year[200],m1[200],m2[200],i,j;//c????
	
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   
		int c1=1,c2=1;
		int days[]={0,31,0,31,30,31,30,31,31,30,31,30,31};
		scanf("%d %d %d",&year[i],&m1[i],&m2[i]);
		if((year[i]%4==0)&&(year[i]%100!=0)||(year[i]%400==0))
		     days[2]+=29;
		else
			days[2]+=28;

		for(j=0;j<m1[i];j++)
			c1=c1+days[j];
		for(j=0;j<m2[i];j++)
			c2=c2+days[j];
		
		if ((c2-c1)%7==0)
			printf("YES\n");
		else
			printf("NO\n");
		
		
	}

	return 0;
}