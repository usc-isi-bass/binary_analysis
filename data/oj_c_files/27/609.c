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

/*
 * ?????????????.cpp
 * ?????1200012840
 * ?????2012-10-19
 * ???????
        x1 = (-b + sqrt(b*b-4*a*c))/(2*a)
        x2 = (-b - sqrt(b*b-4*a*c))/(2*a)
                ??????? ax2 + bx + c = 0 ?????a???0?
 */



int main()
{
	int i,n;//????
	double a,b,c,x1,x2;//????
	cin>>n;//??????
	for(i=1;i<=n;i++)//??for??
	{
		cin>>a>>b>>c;//??????
		if(b*b-4*a*c>0)//??delta?0???
		{
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);//?????x1,x2??
		}
		if(b*b-4*a*c==0)//??delta?0???
		{
			if(b!=0)//??b??
			x1=-b/(2*a);
			else x1=0;
			x1=-b/(2*a);
			printf("x1=x2=%.5f\n",x1);//?????x1,x2??
		}
		if(b*b-4*a*c<0)//??delta?0???
		{
			if(b!=0)//??b??
			  x1=-b/(2*a);
			else x1=0;
			     x2=sqrt(-b*b+4*a*c)/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,x2,x1,x2);//?????x1,x2??

		}
	}
	return 0;//????
}
