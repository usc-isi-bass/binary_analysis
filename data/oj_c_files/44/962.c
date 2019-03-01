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
	int reverse(int num);
	int i;
	int a[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",reverse(a[i]));
	}
}
int reverse(int num)
{
	int x[5];
	int rev;
	if(num==0){rev=0;}
	if(num>0)
	{
		if(num>9999)
		{
			x[4]=((int)(num%10));
			x[3]=(((int)(num-x[4])%100))/10;
			x[2]=(((int)(num-x[4]-x[3]*10)%1000))/100;
			x[1]=(((int)(num-x[4]-x[3]*10-x[2]*100)%10000))/1000;
			x[0]=(((int)(num-x[4]-x[3]*10-x[2]*100-x[1]*1000)%100000))/10000;
			rev=x[4]*10000+x[3]*1000+x[2]*100+x[1]*10+x[0];
		}
		if(num>999&&num<10000)
		{
			x[4]=((int)(num%10));
			x[3]=(((int)(num-x[4])%100))/10;
			x[2]=(((int)(num-x[4]-x[3]*10)%1000))/100;
			x[1]=(((int)(num-x[4]-x[3]*10-x[2]*100)%10000))/1000;
            rev=x[4]*1000+x[3]*100+x[2]*10+x[1];
		}
		if(num>99&&num<1000)
		{
            x[4]=((int)(num%10));
			x[3]=(((int)(num-x[4])%100))/10;
			x[2]=(((int)(num-x[4]-x[3]*10)%1000))/100;
            rev=x[4]*100+x[3]*10+x[2];
		}
		if(num>9&&num<100)
		{
            x[4]=((int)(num%10));
			x[3]=(((int)(num-x[4])%100))/10;
			rev=x[4]*10+x[3];
		}
		if(num>0&&num<10)
		{
			rev=num;
		}
	}
	if(num<0)
	{
		num=((-1)*num);
		if(num>9999)
		{
			x[4]=((int)(num%10));
			x[3]=(((int)(num-x[4])%100))/10;
			x[2]=(((int)(num-x[4]-x[3]*10)%1000))/100;
			x[1]=(((int)(num-x[4]-x[3]*10-x[2]*100)%10000))/1000;
			x[0]=(((int)(num-x[4]-x[3]*10-x[2]*100-x[1]*1000)%100000))/10000;
			rev=(x[4]*10000+x[3]*1000+x[2]*100+x[1]*10+x[0])*(-1);
		}
		if(num>999&&num<10000)
		{
			x[4]=((int)(num%10));
			x[3]=(((int)(num-x[4])%100))/10;
			x[2]=(((int)(num-x[4]-x[3]*10)%1000))/100;
			x[1]=(((int)(num-x[4]-x[3]*10-x[2]*100)%10000))/1000;
            rev=(x[4]*1000+x[3]*100+x[2]*10+x[1])*(-1);
		}
		if(num>99&&num<1000)
		{
            x[4]=((int)(num%10));
			x[3]=(((int)(num-x[4])%100))/10;
			x[2]=(((int)(num-x[4]-x[3]*10)%1000))/100;
            rev=(x[4]*100+x[3]*10+x[2])*(-1);
		}
		if(num>9&&num<100)
		{
            x[4]=((int)(num%10));
			x[3]=(((int)(num-x[4])%100))/10;
			rev=(x[4]*10+x[3])*(-1);
		}
		if(num>0&&num<10)
		{
			rev=(-1)*num;
		}
	}


	
	return(rev);
}