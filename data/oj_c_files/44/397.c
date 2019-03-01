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
int n,i;
void reverse(int num);

for(i=0;i<6;i++)
{
	scanf("%d",&n);
	reverse(n);
}

return 0;
}
void reverse(int num)
{
	int i,result,k;	

    if(num<0)
	{
		printf("-");
		num=num*-1;
		k=0;
			while(num/10!=0)
			{
				if(num%10!=0)
				{
					k=1;
				}
				if(k!=0)
				{
				printf("%d",num%10);
				}	num=num/10;
			}
			if(num<10&&num>0)
			{printf("%d\n",num);}
	}else if(num>0)
	{
       k=0;
		while(num/10!=0)
			{
			if(num%10!=0)
				{
					k=1;
				}
				if(k!=0)
				{
				printf("%d",num%10);
				
				}num=num/10;
			}
		if(num<10&&num>0)
			{printf("%d\n",num);}
	
	}else if(num==0)
	{
		printf("0");
	}

}
