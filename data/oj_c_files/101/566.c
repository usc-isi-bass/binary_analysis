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
	int a,b,c,num1,num2,num3,i; char h[3];
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			if(a!=b)
				for(c=1;c<=3;c++)
					if(c!=a&&c!=b)
					{
						num1=(b>a)+(c==a);//??????????
						num2=(a>b)+(a>c);
						num3=(c>b)+(b>a);
						if((num1-num2)*(b-a)>0&&(num1-num3)*(c-a)>0&&(num2-num3)*(c-b)>0)//???????????
						{
							h[num1]='A'; h[num2]='B';h[num3]='C';//???????????
							for(i=2;i>=0;i--)
								cout<<h[i];
						}
					}
	return 0;
}