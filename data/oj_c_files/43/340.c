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
	int i,number,half,s1=0,s2=0,sum1=0,sum2=0,j,m,k1,k2;//??half???????s1,s2??????????????????????????????
	cin>>number;
	half=number/2;
		for(s1=3;s1<=half;s1++)
		{
			sum1=0;
			sum2=0;
			s2=number-s1;//?????????
			for(j=2;j<s1;j++)//??s1?????
			{
				k1=s1%j;
				{if(k1==0)
					sum1=sum1+1;}
			}
			for(m=2;m<s2;m++)//??s2?????
			{
				k2=s2%m;
				{if(k2==0)
					sum2=sum2+1;}
			}
			if(sum1==0&&sum2==0)
				cout<<s1<<" "<<s2<<endl;//?????????
		}
	
		return 0;



}


