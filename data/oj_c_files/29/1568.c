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

//**********************************
//****       ??????      *****
//****        1200012718       *****
//**        ???????        **
//**********************************
int main ()
{
	int m;
	cin>>m;                            //????m
	double a=1,b=1,c,n,sum=0;         //abc???????????sum??
	for (int i=1;i<=m;i++)
	{
		cin>>n;                   //??n??
		a=1,b=1,sum=0;            //???????ab?????sum
		for (int j=1;j<=n;j++)
		{
		     c=a+b;               //c=a+b  ??????
		     sum=sum+c/b;
		     a=b;           
		     b=c;                //???c/b???a?b???????
		}
		printf("%.3f\n",sum);   //???????sum
	}

	return 0;
}