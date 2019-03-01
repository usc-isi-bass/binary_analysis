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

int reverse(int num)
{
	int m,b=0,temp=0;
	if(num==0||num==-0)
		m=0;
	else
	{
		if(num<0)
		{
			num=-num;
			temp=1;
		}
		while(num%10==0)
		{
			num=num/10;
		}
		while(num!=0)
        {
		
			b=b*10+num%10;
		    num=num/10;
		}	
		if(temp==0)
			m=b;
		else m=-b;
	}
		return(m);
}

void main()
{
	int n,i;
	for(i=1;i<=6;i++){
		scanf("%d",&n);
		printf("%d\n",reverse(n));}
}