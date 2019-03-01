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

void main()
{
	int n;
	void suan(int a);
	scanf("%d",&n);
    suan(n);
    
}
void suan(int a)
{
	int s;
    if(a==1)
		printf("End");
	else if(a%2==0)
	{
		s=a/2;
		if(s!=1)
		{
			printf("%d/2=%d\n",a,s);
		suan(s);
		}
		else 
		{   printf("%d/2=%d\n",a,s);
		printf("End");}
		
	}
	else if(a%2!=0)
	{
		s=a*3+1;
		printf("%d*3+1=%d\n",a,s);
		suan(s);
	}
}