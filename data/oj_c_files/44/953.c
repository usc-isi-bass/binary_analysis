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
	int i;int a[6];
	int b;
	int reverse(int x);
	for(i=1;i<=6;i++)
	{
		scanf("%d",&a[i-1]);
	}
	for(i=0;i<=5;i++)
	{
		b=reverse(a[i]);
		printf("%d\n",b);
	}
}
	int reverse(int x)
	{
		int y;
		if(-9<=x&&x<=9)y=x;
		else if(x>=10&&x<100)
			y=x%10*10+(int)(x/10);
		else if(x>=100&&x<1000)
			y=x%10*100+x/100+(x%100/10)*10;
		else if(x>=1000&&x<10000)
			y=x%10*1000+x/1000+(x%100/10)*100+(x%1000/100)*10;
		else if(x>=10000)
			y=x%10*10000+x/10000+(x%100/10)*1000+(x%1000/100)*100+(x%10000/1000)*10;
		else if(x<=-10&&x>-100)
			y=-((-x)%10*10+(int)((-x)/10));
else if(x<=-100&&x>-1000)

		y=-((-x)%10*100+(-x)/100+((-x)%100/10)*10);
else if(x<=-1000&&x>-10000)
			y=-((-x)%10*1000+(-x)/1000+((-x)%100/10)*100+((-x)%1000/100)*10);

else if(x<=-10000)
			y=-((-x)%10*10000+(-x)/10000+((-x)%100/10)*1000+((-x)%1000/100)*100+((-x)%10000/1000)*10);
return(y);
	}
